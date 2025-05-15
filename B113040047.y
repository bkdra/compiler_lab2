%{
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    extern unsigned lineCount;
    int yylex();
    void yyerror();

	int hashFunction_linear(char *s);
	void create(); 
	int lookup(char* s);
	void insert(char* s);
	void dump();
%}

%union{
    float floatVal;
    int intVal;
}


%type start_structures start_structure variable_declaration id_list id_list_const class_declaration
%type class_modifier super interface interface_type_list class_body class_body_declaration
%type fields class_fields instance_fields method method_modifier formal_arguments follow_formal_args
%type statement compound_statement variable_declarations statements simple_statement name type const_expr
%type compound_statement_body expression term factor prefixOP postfixOP method_invocation arguments
%type follow_expr conditional_statement else boolean_expr infixOP if_else_loop_statement
%type loop_statement while for forInitOpt follow_forInitOpt return_statement forUpdateOpt 


%token ADD INC MINUS DEC MUL DIV MOD AND OR NOT EQ NE LT LE GT GE ASSIGN BOOL BREAK BUTE CASE
%token CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE FINAL FINALLY FLOAT FOR
%token IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING
%token SWITCH THIS TRUE TRY VOID WHILE COMMA COLON SEMICOLON LPAREN RPAREN LBRACKET RBRACKET
%token LBRACE RBRACE INT_LIT FLOAT_LIT STRING_LIT ID ABSTRACT DOT READ

%%
lines:  start_structures

start_structures: 
	| start_structure start_structures

start_structure: class_declaration

variable_declaration: STATIC type id_list SEMICOLON
	| type id_list SEMICOLON
	| type LBRACKET RBRACKET ID ASSIGN NEW type LBRACKET INT_LIT RBRACKET SEMICOLON
	| FINAL type id_list_const SEMICOLON

type: INT
	| FLOAT
	| BOOL
	| STRING
	| SHORT
	| LONG

id_list: id_list COMMA id_list
	| ID
	| ID ASSIGN const_expr

id_list_const: id_list_const COMMA id_list_const
	| ID ASSIGN const_expr

const_expr: expression

class_declaration: class_modifier CLASS ID super interface class_body

class_modifier: PUBLIC
	| ABSTRACT
	| FINAL

super: 
	| EXTENDS ID

interface: 
	| IMPLEMENTS interface_type_list

interface_type_list: ID
	| interface_type_list ID

class_body: LBRACE class_body_declaration RBRACE

class_body_declaration: fields
	| method
	| fields class_body_declaration	
	| method class_body_declaration

fields: class_fields
	| instance_fields

class_fields: STATIC type id_list

instance_fields: type id_list
	| type LBRACKET RBRACKET ID ASSIGN NEW type LBRACKET INT_LIT RBRACKET

method: method_modifier type ID LPAREN formal_arguments RPAREN compound_statement

method_modifier: PUBLIC
	| PROTECTED
	| PRIVATE

formal_arguments: 
	| type ID follow_formal_args

follow_formal_args:
	| type ID follow_formal_args

statement: compound_statement
	| simple_statement
	| conditional_statement
	| loop_statement
	| return_statement
	| method_invocation

compound_statement: LBRACE compound_statement_body RBRACE

compound_statement_body: variable_declarations
	| statements

variable_declarations: 
	| variable_declaration variable_declarations

statements: 
	| statement statements

simple_statement: name ASSIGN expression SEMICOLON
	| PRINT LPAREN expression RPAREN SEMICOLON
	| READ LPAREN name RPAREN SEMICOLON
	| name INC SEMICOLON
	| name DEC SEMICOLON
	| expression SEMICOLON
	| SEMICOLON

name: ID
	| ID DOT ID

expression: term
	| expression ADD term
	| expression MINUS term

term: factor
	| factor MUL factor
	| factor DIV factor

factor: ID
	| const_expr
	| LPAREN expression RPAREN
	| prefixOP ID
	| ID postfixOP
	| method_invocation

prefixOP: INC
	| DEC
	| ADD
	| MINUS

postfixOP: INC
	| DEC

method_invocation: name LPAREN arguments RPAREN

arguments: 
	| expression follow_expr

follow_expr: COMMA expression follow_expr

conditional_statement: IF LPAREN boolean_expr RPAREN if_else_loop_statement
	| IF LPAREN boolean_expr RPAREN if_else_loop_statement else

else: ELSE if_else_loop_statement

boolean_expr: expression infixOP expression

infixOP: EQ
	| NE
	| LT
	| LE
	| GT
	| GE

if_else_loop_statement: simple_statement
	| compound_statement

loop_statement: while
	| for

while: WHILE LPAREN boolean_expr RPAREN if_else_loop_statement

for: FOR LPAREN forInitOpt SEMICOLON boolean_expr SEMICOLON forUpdateOpt RPAREN if_else_loop_statement

forInitOpt: INT ID ASSIGN expression follow_forInitOpt
	| ID ASSIGN expression follow_forInitOpt

follow_forInitOpt: 
	| COMMA ID ASSIGN expression follow_forInitOpt
	| COMMA INT ID ASSIGN expression follow_forInitOpt

forUpdateOpt: ID INC
	| ID DEC

return_statement: RETURN expression SEMICOLON


%%
int main(){
    yyparse();
    return 0;
}

void yyerror() {
	  printf("syntax error at line %d\n", lineCount+1);
      flag = 0;
};

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