%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 10000

typedef struct _Identifier{
	int order;
	char* ID;
	int next;
} Identifier;

unsigned charCount = 1, idCount = 0, lineCount = 1;
int isOperator = 0;
int previousIndex = -1;
int firstID;
Identifier emptyID = {-1, NULL, -1};
Identifier* table;

int hashFunction_linear(char *s);
void create(); 
int lookup(char* s);
void insert(char* s);
void dump();
int isOverflow_int(char *str);
%}
operator \+(\+)?|-(-)?|\*|\/|%|=|<|<=|>|>=|!=|==|&|\|\||! 

space [ \t]

eol \n

reserved_word boolean|break|bute|case|catch|class|const|continue|default|do|double|else|extends|false|final|finally|float|for|if|implements|int|long|main|new|print|private|protected|public|return|short|static|string|switch|this|true|try|void|while

symbol [,:;\(\)\[\]\{\}]

id [_a-zA-Z0-9$]* 

int [+-]?(([0-9]*)|0x[0-9A-F]*)

float [\+\-]?((([0-9]+)\.([0-9]+))|(\.([0-9]+))|([0-9]+\.)|[0-9]+)([eE][+-]?[0-9]+)?(f|d)?

string \".*\"

invalid_string (\'.*\')|(\".*\\\")|(\"[^\"\n]*)

comment \/\/.*|\/\*([^*]|\*+[^*/])*\*+\/

%%
{operator} {
	printf("Line: %d, 1st char: %d, \"%s\" is an \"operator\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
	isOperator = 0;
}
{space} {
	charCount++;
}
{eol}   {
	lineCount++;
	charCount = 1;
	isOperator = 0;
}
{reserved_word} {
	printf("Line: %d, 1st char: %d, \"%s\" is a \"reserved word\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
	isOperator = 0;
}
{symbol} {
	printf("Line: %d, 1st char: %d, \"%s\" is a \"symbol\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
	if(yytext[0] == ')')
		isOperator = 1;
	else
		isOperator = 0;
}

{int} {
	if(isOperator) // 代表+/-是operator並非正負號
	{
		printf("Line: %d, 1st char: %d, \"%c\" is a \"operator\".\n", lineCount, charCount, yytext[0]);
		yytext++;
		if(isOverflow_int(yytext)) // 進行overflow的判斷
		{
			printf("%s is not a valid integer, because it overflows\n", yytext);
		}
		else
			printf("Line: %d, 1st char: %d, \"%s\" is an \"integer\".\n", lineCount, charCount+1, yytext);
	}
	else // 代表+/-是正負號並非operator
	{
		if(isOverflow_int(yytext)) // 進行overflow的判斷
		{
			printf("%s is not a valid integer, because it overflows\n", yytext);
		}
		else
			printf("Line: %d, 1st char: %d, \"%s\" is an \"integer\".\n", lineCount, charCount, yytext);
	}
		
	charCount += yyleng;
	isOperator = 1;
}
{float} {
	if(isOperator) // 代表+/-是operator並非正負號
	{
		printf("Line: %d, 1st char: %d, \"%c\" is a \"operator\".\n", lineCount, charCount, yytext[0]);
		yytext++;
		printf("Line: %d, 1st char: %d, \"%s\" is a \"float\".\n", lineCount, charCount+1, yytext);
	}
	else // 代表+/-是正負號並非operator
		printf("Line: %d, 1st char: %d, \"%s\" is a \"float\".\n", lineCount, charCount, yytext);
	
	charCount += yyleng;
	isOperator = 1;
}
{id} {
	// 把非英文字母開頭或底線開頭的id挑出來
	if(yytext[0] >= '0' && yytext[0] <= '9' || yytext[0] == '$')
	{
		printf("%s is not a valid identifier, because it does not begin with a letter or an underline\n", yytext);
	}
	else
	{
		printf("Line: %d, 1st char: %d, \"%s\" is an \"ID\".\n", lineCount, charCount, yytext);
		insert(yytext);
	}
	charCount += yyleng;
	isOperator = 1;
}
{invalid_string} {
	// 把不合法的string挑出來，包含以單引號包起來的、結尾非雙引號的
	if(yytext[0] == '\'')
		printf("\"%s\" is a wrong string. Cannot use (') as the quote of a string\n", yytext);
	if((yytext[0] == '"' && yytext[strlen(yytext)-1] != '"') ||
		(yytext[0] == '"' && yytext[strlen(yytext)-1] == '"' && yytext[strlen(yytext)-2] == '\\'))
		printf("\"%s\" is a wrong string. The quoting is not closed.\n", yytext);
	charCount += yyleng;
	isOperator = 0;
}
{string} {
	int isWrongString = 0;
	int wrongPosition = 0;
	yytext[strlen(yytext)-1] = '\0';
	yytext++;
	int yytext_len = strlen(yytext);
	for(int i=0;i<yytext_len;i++) // 把string中包含雙引號,但沒有用反斜線使其跳脫的string挑出來
	{
		if(yytext[i] == '"' && i!=0 && yytext[i-1] != '\\')
		{
			isWrongString = 1;
			wrongPosition = i;
			break;
		}
		else if(yytext[i] == '"' && i!=0 && yytext[i-1] == '\\')
		{
			for(int j=i-1;j<yytext_len-2;j++)
			{
				yytext[j] = yytext[j+1];
			}
			yytext_len--;
		}
	}
	if(!isWrongString)
	{
		printf("Line: %d, 1st char: %d, \"%s\" is a \"string\".\n", lineCount, charCount, yytext);
	}
	else
	{	
		printf("\"%s\" is a wrong string. Unvalid syntax of '\"'(Position: %d). \nIf you want to include '\"' in the string, you have to add '\\' immediately before it.\n", yytext, wrongPosition);
	}
	charCount += yyleng;
	isOperator = 0;
}

{comment} {
	printf("Line: %d, 1st char: %d, \"%s\" is a \"comment\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
	for(int i=0;i<strlen(yytext);i++)
	{
		if(yytext[i] == '\n')
			lineCount++;
	}
	isOperator = 0;
}

%%
int main(){
	create();
	yylex();
	dump();
	return 0;
}

int hashFunction_linear(char *s)
{
	int hashValue = (int)s[0] * 80;

	while(table[hashValue].order != emptyID.order)
	{
		hashValue++;
		if(hashValue >= MAXSIZE)
			hashValue--;
	}
	return hashValue;
}

int isOverflow_int(char *str)
{
    char* intUpperBound = "2147483648";
    char* intLowerBound = "2147483649";
    int isNegative = 0;
    if(str[0] == '-')
    {
        isNegative = 1;
        str++;
    }
    
    if(!isNegative)
    {
        if(strlen(str) < strlen(intUpperBound))
            return 0;
        if(strlen(str) > strlen(intUpperBound))
            return 1;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i] > '9' || str[i] < '0')
                return 0;
            if(str[i] < intUpperBound[i])
                return 0;
        }
        return 1;
    }
    else
    {
        if(strlen(str) < strlen(intLowerBound))
            return 0;
        if(strlen(str) > strlen(intLowerBound))
            return 1;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i] > '9' || str[i] < '0')
                return 0;
            if(str[i] < intLowerBound[i])
                return 0;
        }
        return 1;
    }
}

void create()
{
	table = (Identifier*)malloc(MAXSIZE*sizeof(Identifier));
	
	for(int i=0;i<MAXSIZE;i++)
		table[i] = emptyID;
}

int lookup(char* s)
{
	int index = (int)s[0]*80;
	int startIndex = index;
	int notFound = 1;

	while(notFound && index != (startIndex-1))
	{
		if(table[index].order == emptyID.order || table[index].order != emptyID.order && strcmp(table[index].ID, s) != 0)
		{
			index++;
			if(index == MAXSIZE)
				index -= MAXSIZE;
		}
		else
		{
			notFound = 0;
		}
			
	}
	if(!notFound)
		return index;
	else
		return -1;
}

void insert(char* s)
{
	int isInserted = lookup(s);
	if(isInserted != -1)
		return;
	int index = hashFunction_linear(s);
	if(previousIndex != -1)
	{
		table[previousIndex].next = index;
	}
	else
	{
		firstID = index;
	}
	previousIndex = index;

	char* newMatchedID = (char*)malloc(sizeof(char) * strlen(s));
	for(int i=0;s[i]!='\0';i++)
		newMatchedID[i] = s[i];

	Identifier _id = {idCount, newMatchedID, -1};
	table[index] = _id;

	idCount++;
}

void dump()
{
	printf("\nSymbol table:\n");
	int curr = 0;
	int index = firstID;
	while(curr != idCount)
	{
		printf("%d.  %s\n",table[index].order+1, table[index].ID);
		curr++;
		index = table[index].next;
	}
}