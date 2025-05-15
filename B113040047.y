%{
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
	#define MAXSIZE 10000
    extern unsigned lineCount;
    int yylex();
    void yyerror();

	int hashFunction_linear(char *s);
	void create(); 
	int lookup(char* s);
	void insert(char* s);
	void dump();

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
}


%type start_structures start_structure variable_declaration id_list id_list_const class_declaration
%type class_modifier super interface interface_type_list class_body class_body_declaration
%type fields class_fields instance_fields method method_modifier formal_arguments
%type statement compound_statement simple_statement name type const_expr
%type compound_statement_body expression term factor prefixOP postfixOP method_invocation arguments
%type conditional_statement else boolean_expr infixOP if_else_loop_statement
%type loop_statement while for forInitOpt return_statement forUpdateOpt id_item
%type param_list arg_list init_item init_list


%token ADD INC MINUS DEC MUL DIV MOD AND OR NOT EQ NE LT LE GT GE ASSIGN BOOL BREAK BUTE CASE
%token CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE FINAL FINALLY FLOAT FOR
%token IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING
%token SWITCH THIS TRUE TRY VOID WHILE COMMA COLON SEMICOLON LPAREN RPAREN LBRACKET RBRACKET
%token LBRACE RBRACE INT_LIT FLOAT_LIT STRING_LIT ID_TOK ABSTRACT DOT READ CHAR

%left  OR
%left  AND
%nonassoc EQ NE LT LE GT GE        /* 比較 */
%left  ADD MINUS
%left  MUL DIV MOD
%right ASSIGN                      /* = 右結合 */
%right INC DEC  

%%
lines:  start_structures
	;

start_structures: 
	| start_structure start_structures
	;

start_structure: class_declaration
	;

variable_declaration: STATIC type id_list SEMICOLON
	| type id_list SEMICOLON
	| type LBRACKET RBRACKET ID_TOK ASSIGN NEW type LBRACKET INT_LIT RBRACKET SEMICOLON
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



/* ── 先把 “一個變數” 定義清楚 ── */
id_item
    : ID_TOK
    | ID_TOK ASSIGN const_expr
    ;

/* ── 再用左遞迴 + COMMA 串起來 ── */
id_list
    : id_item
    | id_list COMMA id_item
    ;

/* const 版本一樣的寫法 */
id_list_const
    : ID_TOK ASSIGN const_expr      /* 這邊如果真的只能 const，請再細分 */
    | id_list_const COMMA ID_TOK ASSIGN const_expr
    ;


const_expr
    : INT_LIT
    | FLOAT_LIT
    | STRING_LIT
    | TRUE
    | FALSE
    ;


class_declaration: class_modifier CLASS ID_TOK super interface class_body
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


class_body: LBRACE class_body_declaration RBRACE
	;

class_body_declaration: fields
	| method
	| fields class_body_declaration	
	| method class_body_declaration
	;

fields: class_fields
	| instance_fields
	;

class_fields: STATIC type id_list SEMICOLON
	;

instance_fields: type id_list SEMICOLON
	| FINAL type id_list_const SEMICOLON
	| type LBRACKET RBRACKET ID_TOK ASSIGN NEW type LBRACKET INT_LIT RBRACKET SEMICOLON
	;

method: method_modifier type ID_TOK LPAREN formal_arguments RPAREN compound_statement
	| type ID_TOK LPAREN formal_arguments RPAREN compound_statement
	| ID_TOK LPAREN formal_arguments RPAREN compound_statement
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
	| return_statement
	;

compound_statement: LBRACE compound_statement_body RBRACE
	;

compound_statement_body: 
	| variable_declaration compound_statement_body
	| statement compound_statement_body
	;


simple_statement: name ASSIGN expression SEMICOLON
	| PRINT LPAREN expression RPAREN SEMICOLON
	| READ LPAREN name RPAREN SEMICOLON
	| expression SEMICOLON
	| SEMICOLON
	;

name: ID_TOK
	| ID_TOK DOT ID_TOK
	;

expression: term
	| expression ADD term
	| expression MINUS term
	;

term: factor
	| term MUL factor
	| term DIV factor
	;

factor: ID_TOK
	| const_expr
	| LPAREN expression RPAREN
	| prefixOP ID_TOK
	| ID_TOK postfixOP
	| method_invocation
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
	| IF LPAREN boolean_expr RPAREN if_else_loop_statement else
	;

else: ELSE if_else_loop_statement
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
	;

for: FOR LPAREN forInitOpt SEMICOLON boolean_expr SEMICOLON forUpdateOpt RPAREN if_else_loop_statement
	;

forInitOpt
    : /* empty */
    | init_list
    ;

init_item
    : ID_TOK ASSIGN expression
    | INT ID_TOK ASSIGN expression   /* 供 int i=0 這種 */
    ;

init_list
    : init_item
    | init_list COMMA init_item
    ;

forUpdateOpt: ID_TOK INC
	| ID_TOK DEC
	;

return_statement: RETURN expression SEMICOLON
	;


%%
int main(){
    yyparse();
    return 0;
}

void yyerror() {
	  printf("syntax error at line %d\n", lineCount+1);
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