%{
    #include <stdio.h>
	#include <stdlib.h>
    #include <string.h>
    #include <math.h>
	#define MAXSIZE 10000
	#define MAXSIZE_STACK 1000
	

    extern unsigned lineCount;
	extern unsigned charCount;
    int yylex();
    void yyerror(const char* str);

	int hashFunction_linear(char *s);
	void create(); 
	int lookup(char* s);
	void insert(char* s);
	void dump();
	void enterScope();
	void departScope();
	int idStack[MAXSIZE_STACK];
	int top = -1;
	int notUsedID[MAXSIZE_STACK];

	typedef struct _Identifier{
		int order;
		char* ID;
		int next;
	} Identifier;

	unsigned idCount = 0;
	int isOperator = 0;
	int previousIndex = -1;
	int firstID;
	Identifier emptyID = {-1, NULL, -1};
	Identifier* table;
%}

%union{
    float floatVal;
    int intVal;
	char* stringVal;
}


%type start_structures start_structure id_list_const class_declaration
%type class_modifier super interface interface_type_list class_body class_body_declaration
%type fields class_fields instance_fields method method_modifier formal_arguments
%type statement compound_statement simple_statement name type const_expr
%type compound_statement_body expression term factor prefixOP postfixOP method_invocation arguments
%type boolean_expr infixOP if_else_loop_statement
%type loop_statement while for forInitOpt return_statement forUpdateOpt
%type param_list arg_list init_item init_list const_term const_factor array_item
%type field_or_array_item wrongIDlist end_of_line conditional_statement else
%type object_declaration variable_declaration id_item id_list id_list_const

%token ADD INC MINUS DEC MUL DIV MOD AND OR NOT EQ NE LT LE GT GE ASSIGN BOOL BREAK BUTE CASE
%token CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE FINAL FINALLY FLOAT FOR
%token IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING
%token SWITCH THIS TRUE TRY VOID WHILE COMMA COLON SEMICOLON LPAREN RPAREN LBRACKET RBRACKET
%token LBRACE RBRACE INT_LIT FLOAT_LIT STRING_LIT ABSTRACT DOT READ CHAR
%token <stringVal> ID_TOK

%left  OR
%left  AND
%nonassoc EQ NE LT LE GT GE        /* 比較 */
%left  ADD MINUS
%left  MUL DIV MOD
%right ASSIGN                      /* = 右結合 */
%right INC DEC  

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%
lines:  start_structures
	;

start_structures: 
	| start_structure start_structures
	;

start_structure: class_declaration
	;

variable_declaration: STATIC type id_list SEMICOLON
	| type id_list end_of_line
	| type LBRACKET RBRACKET ID_TOK{insert($4);} ASSIGN NEW type LBRACKET INT_LIT RBRACKET SEMICOLON
	| FINAL type id_list_const SEMICOLON
	;

type: INT
	| FLOAT
	| BOOL
	| STRING
	| SHORT
	| LONG
	| VOID
	| CHAR
	;

wrong_EOF: ADD | INC | MINUS | DEC | MUL | DIV | MOD | AND | OR | NOT | EQ
    | NE | LT | LE | GT | GE | ASSIGN | BOOL | BREAK | BUTE | CASE
    | CATCH | CLASS | CONST | CONTINUE | DEFAULT | DO | DOUBLE | ELSE | EXTENDS | FALSE
    | FINAL | FINALLY | FLOAT | FOR | IF | IMPLEMENTS | INT | LONG | MAIN | NEW
    | PRINT | PRIVATE | PROTECTED | PUBLIC | RETURN | SHORT | STATIC | STRING | SWITCH
    | THIS | TRUE | TRY | VOID | WHILE | COMMA | COLON  | LPAREN | RPAREN
    | LBRACKET | RBRACKET | LBRACE | RBRACE | INT_LIT | FLOAT_LIT | STRING_LIT | ABSTRACT | DOT | READ
    | CHAR | ID_TOK

end_of_line: SEMICOLON
	| error wrong_EOF{
		yyerror("statement without semicolon");
		yyerrok;
	}

id_item
    : ID_TOK{/*printf("insert ID at id_item: %s\n", $1);*/ insert($1);}
    | ID_TOK{insert($1);} ASSIGN const_expr
    

/* ── 再用左遞迴 + COMMA 串起來 ── */
id_list
    : id_item
    | id_item COMMA id_list
	| id_item wrongIDlist{
		yyerror("invalid variable declaration");
		yyerrok;
	}
    
wrongIDlist: ID_TOK
	| INT_LIT
	| STRING_LIT
	| FLOAT_LIT

id_list_const
    : ID_TOK{/*printf("insert ID at id_list_const: %s\n", $1);*/insert($1);} ASSIGN const_expr      /* 這邊如果真的只能 const，請再細分 */
    | id_list_const COMMA ID_TOK{insert($3);} ASSIGN const_expr
    ;





class_declaration: class_modifier CLASS ID_TOK{/*printf("insert ID: %s\n", $3);*/ insert($3);} super interface class_body
	;

class_modifier: 
	| PUBLIC
	| ABSTRACT
	| FINAL
	;

super: 
	| EXTENDS ID_TOK
	;

interface: 
	| IMPLEMENTS interface_type_list
	;

interface_type_list
    : ID_TOK
    | interface_type_list COMMA ID_TOK
    ;


class_body: LBRACE{enterScope();} class_body_declaration RBRACE{departScope();}
	;

class_body_declaration: fields
	| method
	| fields class_body_declaration	
	| method class_body_declaration
	| error SEMICOLON{
		// printf("run class_body_declaration's yyerrok\n");
		yyerrok;
	}
	;

fields: class_fields
	| instance_fields
	| object_declaration
	;

class_fields: STATIC type id_list SEMICOLON
	;

instance_fields: type id_list end_of_line
	| FINAL type id_list_const SEMICOLON
	| type LBRACKET RBRACKET ID_TOK ASSIGN NEW type LBRACKET INT_LIT RBRACKET end_of_line
	;

method: method_modifier type ID_TOK{/*printf("insert ID method: %s\n", $3);*/insert($3);} LPAREN formal_arguments RPAREN compound_statement
	| type ID_TOK{/*printf("insert ID method: %s\n", $2);*/insert($2);} LPAREN formal_arguments RPAREN compound_statement
	| ID_TOK{/*printf("insert ID method: %s\n", $1);*/insert($1);} LPAREN formal_arguments RPAREN compound_statement
	;

method_modifier: PUBLIC
	| PROTECTED
	| PRIVATE
	;

formal_arguments: /* empty */
    | param_list
    ;

param_list
    : type ID_TOK
    | param_list COMMA type ID_TOK
    ;

statement: compound_statement
	| simple_statement
	| conditional_statement
	| loop_statement
	| ELSE statement 
	{
        yyerror("else without if");
        yyerrok;      /* 清除錯誤狀態，繼續解析後面的輸入 */
    }
	;

compound_statement: LBRACE{enterScope();} compound_statement_body RBRACE{departScope();}
	;

compound_statement_body: 
	| variable_declaration compound_statement_body
	| statement compound_statement_body
	| object_declaration compound_statement_body
	| return_statement
	| class_declaration compound_statement_body
	| ID_TOK{

	}
	| error SEMICOLON{
		/*printf("compound_statement_body's yyerrok\n");*/
		yyerrok;
	}
	;

object_declaration: ID_TOK ID_TOK{/*printf("insert ID object_declaration: %s\n", $2);*/insert($2);} end_of_line /*第一個是class第二個是variable，再看要不要判斷*/
	| ID_TOK ID_TOK{/*printf("insert ID object_declaration: %s\n", $2);*/insert($2);} ASSIGN NEW ID_TOK LPAREN RPAREN end_of_line
	{
		if(strcmp($1, $6))
		{
			printf("invalid object declaration.\n");
		}
	}

simple_statement: name ASSIGN expression SEMICOLON
	| PRINT LPAREN expression RPAREN end_of_line
	| READ LPAREN name RPAREN end_of_line
	| expression end_of_line
	| SEMICOLON
	
	
	;

name: ID_TOK
	| field_or_array_item
	;

field_or_array_item: ID_TOK DOT ID_TOK
	| array_item
	;

array_item: ID_TOK LBRACKET INT_LIT RBRACKET
	| ID_TOK LBRACKET ID_TOK RBRACKET // ID check whether int?

const_expr: const_term
	| const_expr ADD const_term
	| const_expr MINUS const_term
    ;

const_term: const_factor
	| const_term MUL const_factor
	| const_term DIV const_factor
	;

const_factor:INT_LIT
    | FLOAT_LIT
    | STRING_LIT
    | TRUE
    | FALSE
	| ID_TOK
	| method_invocation
	



expression: term
	| expression ADD term
	| expression MINUS term
	;

term: factor
	| term MUL factor
	| term DIV factor
	;

factor: ID_TOK
	| INT_LIT
    | FLOAT_LIT
    | STRING_LIT
    | TRUE
    | FALSE
	| LPAREN expression RPAREN
	| prefixOP name
	| name postfixOP
	| INT_LIT postfixOP
	| method_invocation
	| ID_TOK DOT ID_TOK
	| array_item
	;

prefixOP: INC
	| DEC
	| ADD
	| MINUS
	;

postfixOP: INC
	| DEC
	;

method_invocation: name LPAREN arguments RPAREN
	;

arguments
    : /* empty */
    | arg_list
    ;

arg_list
    : expression
    | arg_list COMMA expression
    ;



conditional_statement: IF LPAREN boolean_expr RPAREN if_else_loop_statement 
		%prec LOWER_THAN_ELSE
	| IF LPAREN boolean_expr RPAREN if_else_loop_statement else
	| IF LPAREN error RPAREN
	{
		yyerror("Invalid Boolean Expression");
		yyerrok;
	}
	;

else: ELSE if_else_loop_statement
	| ELSE conditional_statement
	;


boolean_expr: expression infixOP expression
	;

infixOP: EQ
	| NE
	| LT
	| LE
	| GT
	| GE
	;

if_else_loop_statement: simple_statement
	| compound_statement
	;

loop_statement: while
	| for
	;

while: WHILE LPAREN boolean_expr RPAREN if_else_loop_statement
	| error RPAREN{
		yyerror("Invalid Boolean Expression");
		yyerrok;
	}
	;

for: FOR LPAREN forInitOpt SEMICOLON boolean_expr SEMICOLON forUpdateOpt RPAREN if_else_loop_statement
	;

forInitOpt
    : /* empty */
    | init_list
    ;

init_item
    : name ASSIGN expression
    | INT ID_TOK ASSIGN expression   /* 供 int i=0 這種 */
    ;

init_list
    : init_item
    | init_list COMMA init_item
    ;

forUpdateOpt: name INC
	| name DEC
	;

return_statement: RETURN expression SEMICOLON
	;


%%
int main(){
	create();
    yyparse();
    return 0;
}

void yyerror(const char* str) {
	if(strcmp(str, "syntax error"))
	  printf("syntax error at line %d, char %d: %s\n", lineCount+1, charCount ,str);

};

void create()
{
	table = (Identifier*)malloc(MAXSIZE*sizeof(Identifier));
	
	for(int i=0;i<MAXSIZE;i++)
		table[i] = emptyID;
}

int lookup(char* s)
{
	if(top >= 0)
	{
		int start_order = idStack[top];
		for(int i=0;i<MAXSIZE;i++)
		{
			if(table[i].order >= start_order && !strcmp(s, table[i].ID))
				return 1;
		}
	}
	
	return -1;

	/*
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
	*/
}

void insert(char* s)
{
	int isInserted = lookup(s);
	if(isInserted != -1)
	{
		yyerror("duplicated identifier in the current scope.");
		return;
	}
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


void enterScope()
{
	/*printf("enterScope: top = %d\n", top);*/
    if (top == MAXSIZE_STACK-1) {
        fprintf(stderr, "scope too deep\n");
        exit(1);
    }
    idStack[++top] = idCount;
}
void departScope()
{
	//printf("departScope: top = %d\n", top);
	
	int old_count = idStack[top--];
    while (idCount > old_count) {
        for (int i = 0; i < MAXSIZE; i++) {
            if (table[i].order == idCount-1) {
				//printf("delete the ID: %s\n", table[i].ID);
                table[i] = emptyID;
                break;
            }
        }
        idCount--;
    }
	//dump();
}