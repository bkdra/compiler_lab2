%{
#include "y.tab.h"          /* <-- Yacc 產生的 token 代號 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 10000

unsigned charCount = 1, lineCount;
int isPrintedByComment = 0;
int  isOverflow_int(char *str);       /* 你原來寫的判斷函式 */
char msg[MAXSIZE] = "";

/* 小工具：把 yytext 存進 msg，並補一個空白做分隔 */
static inline void append_token(const char *s){
    size_t need = strlen(msg) + strlen(s);   /* +1 空白 +1 NUL */
    if (need < MAXSIZE){
        charCount += yyleng;
        strcat(msg, s);
    }
}
%}

operator       \+\+|--|\+|-|\*|\/|%|==|!=|<=|>=|<|>|=|&&|\|\||!
space          [ \t]+
eol            \r?\n
id             [_a-zA-Z][_a-zA-Z0-9$]*
id_invalid     [_a-zA-Z0-9$]+
int_lit        (([0-9]+)|0x[0-9A-F]+)
float_lit      ([0-9]*\.[0-9]+|[0-9]+\.)([eE][+-]?[0-9]+)?[fFdD]?
string_lit     \"([^\"\\\n]|\\.)*\"
invalid_string (\'.*\')|(\".*\\\")|(\"[^\"\n;)]*)
comment        \/\/[^\n]*|\/\*([^*]|\*+[^*/])*\*+\/


%%
{space}        { append_token(yytext);  }

{eol}          { 
                    if(msg && !isPrintedByComment)
                    { 
                        //printf("run3\n");
                        printf("line%3d: %s", lineCount+1, msg); 
                    }
                    else
                    {
                        //printf("run4\n");
                        printf("%s", msg);
                        isPrintedByComment = 0;
                    }
                    memset(msg, 0, MAXSIZE);
                    printf("\n"); 
                    charCount = 0;
                    lineCount++;       /* 換行：不累加 msg         */ 
               }

{comment}      {
                    isPrintedByComment = 1;
                    int isPrinted = 1;
                    if(strlen(msg))
                    {
                        isPrinted = 0;
                        printf("line%3d: %s", lineCount+1, msg); 
                        memset(msg, 0, MAXSIZE);
                    }
                    else
                    {
                        printf("line%3d: ", lineCount+1); 
                    }

                    charCount += yyleng;

                    int index = 0;
                    while(index != strlen(yytext))
                    {
                        if(!isPrinted)
                        {
                            if(yytext[index] == '\n')
                            {
                                isPrinted = 1;
                                lineCount++;
                                printf("%c", yytext[index]);
                                printf("line%3d: ", lineCount+1);
                            }
                            else
                                printf("%c", yytext[index]);
                            index++;
                        }
                        else
                        {
                            printf("%c", yytext[index]);
                            if(yytext[index] == '\n')
                            {
                                lineCount++;
                                printf("line%3d: ", lineCount+1);
                                
                            }
                            index++;
                        }
                    }
               }



{operator}     {
                  
                  append_token(yytext);
                  if      (!strcmp(yytext,"+"))   return ADD;
                  else if (!strcmp(yytext,"++"))  return INC;
                  else if (!strcmp(yytext,"-"))   {/*printf("get MINUS\n");*/return MINUS;}
                  else if (!strcmp(yytext,"--"))  {/*printf("get DEC\n");*/ return DEC;}
                  else if (!strcmp(yytext,"*"))   {/*printf("get MUL\n");*/ return MUL;}
                  else if (!strcmp(yytext,"/"))   return DIV;
                  else if (!strcmp(yytext,"%"))   return MOD;
                  else if (!strcmp(yytext,"&&"))  return AND;
                  else if (!strcmp(yytext,"||"))  return OR;
                  else if (!strcmp(yytext,"!"))   return NOT;
                  else if (!strcmp(yytext,"=="))  return EQ;
                  else if (!strcmp(yytext,"!="))  return NE;
                  else if (!strcmp(yytext,"<"))   return LT;
                  else if (!strcmp(yytext,"<="))  return LE;
                  else if (!strcmp(yytext,">"))   return GT;
                  else if (!strcmp(yytext,">="))  return GE;
                  else                            {/*printf("get ASSIGN\n");*/return ASSIGN;}   /* '=' */
                }

"boolean"      { append_token(yytext); return BOOL;       }
"break"        { append_token(yytext); return BREAK;      }
"bute"         { append_token(yytext); return BUTE;       }
"case"         { append_token(yytext); return CASE;       }
"catch"        { append_token(yytext); return CATCH;      }
"class"        { append_token(yytext); return CLASS;      }
"const"        { append_token(yytext); return CONST;      }
"continue"     { append_token(yytext); return CONTINUE;   }
"char"         { append_token(yytext); return CHAR;       }
"default"      { append_token(yytext); return DEFAULT;    }
"do"           { append_token(yytext); return DO;         }
"double"       { append_token(yytext); return DOUBLE;     }
"else"         { append_token(yytext); return ELSE;       }
"extends"      { append_token(yytext); return EXTENDS;    }
"false"        { append_token(yytext); return FALSE;      }
"final"        { append_token(yytext); return FINAL;      }
"finally"      { append_token(yytext); return FINALLY;    }
"float"        { append_token(yytext); return FLOAT;      }
"for"          { append_token(yytext); return FOR;        }
"if"           { append_token(yytext); return IF;         }
"implements"   { append_token(yytext); return IMPLEMENTS; }
"int"          { append_token(yytext); return INT;        }
"long"         { append_token(yytext); return LONG;       }
"new"          { append_token(yytext); return NEW;        }
"print"        { append_token(yytext); return PRINT;      }
"read"         { append_token(yytext); return READ;       }
"private"      { append_token(yytext); return PRIVATE;    }
"protected"    { append_token(yytext); return PROTECTED;  }
"public"       { append_token(yytext); return PUBLIC;     }
"return"       { append_token(yytext); return RETURN;     }
"short"        { append_token(yytext); return SHORT;      }
"static"       { append_token(yytext); return STATIC;     }
"string"       { append_token(yytext); return STRING;     }
"switch"       { append_token(yytext); return SWITCH;     }
"this"         { append_token(yytext); return THIS;       }
"true"         { append_token(yytext); return TRUE;       }
"try"          { append_token(yytext); return TRY;        }
"void"         { append_token(yytext); return VOID;       }
"while"        { append_token(yytext); return WHILE;      }
"abstract"     { append_token(yytext); return ABSTRACT;   }

","   { append_token(yytext); return COMMA;      }
"."   { append_token(yytext); return DOT;        }
":"   { append_token(yytext); return COLON;      }
";"   { append_token(yytext); return SEMICOLON;  }
"("   { append_token(yytext); /*printf("get LPAREN\n");*/ return LPAREN;     }
")"   { append_token(yytext); /*printf("get RPAREN\n");*/ return RPAREN;     }
"["   { append_token(yytext); return LBRACKET;   }
"]"   { append_token(yytext); return RBRACKET;   }
"{"   { append_token(yytext); return LBRACE;     }
"}"   { append_token(yytext); return RBRACE;     }



{int_lit}      {
                  append_token(yytext);
                  //printf("get INT_LIT\n");
                  return INT_LIT;
                }

{float_lit}    {
                  append_token(yytext);
                  return FLOAT_LIT;
                }

{invalid_string} {
	// 把不合法的string挑出來，包含以單引號包起來的、結尾非雙引號的
    append_token(yytext);
	if(yytext[0] == '\'')
		printf("\"%s\" is a wrong string. Cannot use (') as the quote of a string\n", yytext);
	if((yytext[0] == '"' && yytext[strlen(yytext)-1] != '"') ||
		(yytext[0] == '"' && yytext[strlen(yytext)-1] == '"' && yytext[strlen(yytext)-2] == '\\'))
		printf("%s is a wrong string. The quoting is not closed.\n", yytext);
	charCount += yyleng;
    return STRING_LIT;
}

{string_lit}   {
                    append_token(yytext);
                    /* 去掉首尾引號再給 Yacc */
                    char* original_yytext = strdup(yytext);
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
                        return STRING_LIT;
                    }
                    else
                    {	
                        charCount += yyleng;
                        printf("\"%s\" is a wrong string. Unvalid syntax of '\"'(Position: %d). \nIf you want to include '\"' in the string, you have to add '\\' immediately before it.\n", yytext, wrongPosition);
                        return STRING_LIT;
                    }
                }

{id}           {
                  append_token(yytext);
                  yylval.stringVal = strdup(yytext);
                  //printf("get ID: %s\n", yytext);
                  return ID_TOK;
                }
{id_invalid}    {
                    append_token(yytext);
                    printf(">invalid ID at line %d\n", lineCount);
                }


.              { append_token(yytext); charCount += yyleng;}

%%
int yywrap(){
    return 1;
}
