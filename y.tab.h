/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ADD = 258,                     /* ADD  */
    INC = 259,                     /* INC  */
    MINUS = 260,                   /* MINUS  */
    DEC = 261,                     /* DEC  */
    MUL = 262,                     /* MUL  */
    DIV = 263,                     /* DIV  */
    MOD = 264,                     /* MOD  */
    AND = 265,                     /* AND  */
    OR = 266,                      /* OR  */
    NOT = 267,                     /* NOT  */
    EQ = 268,                      /* EQ  */
    NE = 269,                      /* NE  */
    LT = 270,                      /* LT  */
    LE = 271,                      /* LE  */
    GT = 272,                      /* GT  */
    GE = 273,                      /* GE  */
    ASSIGN = 274,                  /* ASSIGN  */
    BOOL = 275,                    /* BOOL  */
    BREAK = 276,                   /* BREAK  */
    BUTE = 277,                    /* BUTE  */
    CASE = 278,                    /* CASE  */
    CATCH = 279,                   /* CATCH  */
    CLASS = 280,                   /* CLASS  */
    CONST = 281,                   /* CONST  */
    CONTINUE = 282,                /* CONTINUE  */
    DEFAULT = 283,                 /* DEFAULT  */
    DO = 284,                      /* DO  */
    DOUBLE = 285,                  /* DOUBLE  */
    ELSE = 286,                    /* ELSE  */
    EXTENDS = 287,                 /* EXTENDS  */
    FALSE = 288,                   /* FALSE  */
    FINAL = 289,                   /* FINAL  */
    FINALLY = 290,                 /* FINALLY  */
    FLOAT = 291,                   /* FLOAT  */
    FOR = 292,                     /* FOR  */
    IF = 293,                      /* IF  */
    IMPLEMENTS = 294,              /* IMPLEMENTS  */
    INT = 295,                     /* INT  */
    LONG = 296,                    /* LONG  */
    MAIN = 297,                    /* MAIN  */
    NEW = 298,                     /* NEW  */
    PRINT = 299,                   /* PRINT  */
    PRIVATE = 300,                 /* PRIVATE  */
    PROTECTED = 301,               /* PROTECTED  */
    PUBLIC = 302,                  /* PUBLIC  */
    RETURN = 303,                  /* RETURN  */
    SHORT = 304,                   /* SHORT  */
    STATIC = 305,                  /* STATIC  */
    STRING = 306,                  /* STRING  */
    SWITCH = 307,                  /* SWITCH  */
    THIS = 308,                    /* THIS  */
    TRUE = 309,                    /* TRUE  */
    TRY = 310,                     /* TRY  */
    VOID = 311,                    /* VOID  */
    WHILE = 312,                   /* WHILE  */
    COMMA = 313,                   /* COMMA  */
    COLON = 314,                   /* COLON  */
    SEMICOLON = 315,               /* SEMICOLON  */
    LPAREN = 316,                  /* LPAREN  */
    RPAREN = 317,                  /* RPAREN  */
    LBRACKET = 318,                /* LBRACKET  */
    RBRACKET = 319,                /* RBRACKET  */
    LBRACE = 320,                  /* LBRACE  */
    RBRACE = 321,                  /* RBRACE  */
    INT_LIT = 322,                 /* INT_LIT  */
    FLOAT_LIT = 323,               /* FLOAT_LIT  */
    STRING_LIT = 324,              /* STRING_LIT  */
    ABSTRACT = 325,                /* ABSTRACT  */
    DOT = 326,                     /* DOT  */
    READ = 327,                    /* READ  */
    CHAR = 328,                    /* CHAR  */
    ID_TOK = 329,                  /* ID_TOK  */
    LOWER_THAN_ELSE = 330          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ADD 258
#define INC 259
#define MINUS 260
#define DEC 261
#define MUL 262
#define DIV 263
#define MOD 264
#define AND 265
#define OR 266
#define NOT 267
#define EQ 268
#define NE 269
#define LT 270
#define LE 271
#define GT 272
#define GE 273
#define ASSIGN 274
#define BOOL 275
#define BREAK 276
#define BUTE 277
#define CASE 278
#define CATCH 279
#define CLASS 280
#define CONST 281
#define CONTINUE 282
#define DEFAULT 283
#define DO 284
#define DOUBLE 285
#define ELSE 286
#define EXTENDS 287
#define FALSE 288
#define FINAL 289
#define FINALLY 290
#define FLOAT 291
#define FOR 292
#define IF 293
#define IMPLEMENTS 294
#define INT 295
#define LONG 296
#define MAIN 297
#define NEW 298
#define PRINT 299
#define PRIVATE 300
#define PROTECTED 301
#define PUBLIC 302
#define RETURN 303
#define SHORT 304
#define STATIC 305
#define STRING 306
#define SWITCH 307
#define THIS 308
#define TRUE 309
#define TRY 310
#define VOID 311
#define WHILE 312
#define COMMA 313
#define COLON 314
#define SEMICOLON 315
#define LPAREN 316
#define RPAREN 317
#define LBRACKET 318
#define RBRACKET 319
#define LBRACE 320
#define RBRACE 321
#define INT_LIT 322
#define FLOAT_LIT 323
#define STRING_LIT 324
#define ABSTRACT 325
#define DOT 326
#define READ 327
#define CHAR 328
#define ID_TOK 329
#define LOWER_THAN_ELSE 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "B113040047.y"

    float floatVal;
    int intVal;
	char* stringVal;

#line 223 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
