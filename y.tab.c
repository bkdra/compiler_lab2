/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "B113040047.y"

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

#line 110 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 319 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADD = 3,                        /* ADD  */
  YYSYMBOL_INC = 4,                        /* INC  */
  YYSYMBOL_MINUS = 5,                      /* MINUS  */
  YYSYMBOL_DEC = 6,                        /* DEC  */
  YYSYMBOL_MUL = 7,                        /* MUL  */
  YYSYMBOL_DIV = 8,                        /* DIV  */
  YYSYMBOL_MOD = 9,                        /* MOD  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_NOT = 12,                       /* NOT  */
  YYSYMBOL_EQ = 13,                        /* EQ  */
  YYSYMBOL_NE = 14,                        /* NE  */
  YYSYMBOL_LT = 15,                        /* LT  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_GT = 17,                        /* GT  */
  YYSYMBOL_GE = 18,                        /* GE  */
  YYSYMBOL_ASSIGN = 19,                    /* ASSIGN  */
  YYSYMBOL_BOOL = 20,                      /* BOOL  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_BUTE = 22,                      /* BUTE  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_CATCH = 24,                     /* CATCH  */
  YYSYMBOL_CLASS = 25,                     /* CLASS  */
  YYSYMBOL_CONST = 26,                     /* CONST  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 28,                   /* DEFAULT  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_DOUBLE = 30,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_EXTENDS = 32,                   /* EXTENDS  */
  YYSYMBOL_FALSE = 33,                     /* FALSE  */
  YYSYMBOL_FINAL = 34,                     /* FINAL  */
  YYSYMBOL_FINALLY = 35,                   /* FINALLY  */
  YYSYMBOL_FLOAT = 36,                     /* FLOAT  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_IMPLEMENTS = 39,                /* IMPLEMENTS  */
  YYSYMBOL_INT = 40,                       /* INT  */
  YYSYMBOL_LONG = 41,                      /* LONG  */
  YYSYMBOL_MAIN = 42,                      /* MAIN  */
  YYSYMBOL_NEW = 43,                       /* NEW  */
  YYSYMBOL_PRINT = 44,                     /* PRINT  */
  YYSYMBOL_PRIVATE = 45,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 46,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 47,                    /* PUBLIC  */
  YYSYMBOL_RETURN = 48,                    /* RETURN  */
  YYSYMBOL_SHORT = 49,                     /* SHORT  */
  YYSYMBOL_STATIC = 50,                    /* STATIC  */
  YYSYMBOL_STRING = 51,                    /* STRING  */
  YYSYMBOL_SWITCH = 52,                    /* SWITCH  */
  YYSYMBOL_THIS = 53,                      /* THIS  */
  YYSYMBOL_TRUE = 54,                      /* TRUE  */
  YYSYMBOL_TRY = 55,                       /* TRY  */
  YYSYMBOL_VOID = 56,                      /* VOID  */
  YYSYMBOL_WHILE = 57,                     /* WHILE  */
  YYSYMBOL_COMMA = 58,                     /* COMMA  */
  YYSYMBOL_COLON = 59,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 60,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 61,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 62,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 63,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 64,                  /* RBRACKET  */
  YYSYMBOL_LBRACE = 65,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 66,                    /* RBRACE  */
  YYSYMBOL_INT_LIT = 67,                   /* INT_LIT  */
  YYSYMBOL_FLOAT_LIT = 68,                 /* FLOAT_LIT  */
  YYSYMBOL_STRING_LIT = 69,                /* STRING_LIT  */
  YYSYMBOL_ABSTRACT = 70,                  /* ABSTRACT  */
  YYSYMBOL_DOT = 71,                       /* DOT  */
  YYSYMBOL_READ = 72,                      /* READ  */
  YYSYMBOL_CHAR = 73,                      /* CHAR  */
  YYSYMBOL_ID_TOK = 74,                    /* ID_TOK  */
  YYSYMBOL_LOWER_THAN_ELSE = 75,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_lines = 77,                     /* lines  */
  YYSYMBOL_start_structures = 78,          /* start_structures  */
  YYSYMBOL_start_structure = 79,           /* start_structure  */
  YYSYMBOL_variable_declaration = 80,      /* variable_declaration  */
  YYSYMBOL_81_1 = 81,                      /* $@1  */
  YYSYMBOL_type = 82,                      /* type  */
  YYSYMBOL_wrong_EOF = 83,                 /* wrong_EOF  */
  YYSYMBOL_end_of_line = 84,               /* end_of_line  */
  YYSYMBOL_id_item = 85,                   /* id_item  */
  YYSYMBOL_86_2 = 86,                      /* $@2  */
  YYSYMBOL_id_list = 87,                   /* id_list  */
  YYSYMBOL_wrongIDlist = 88,               /* wrongIDlist  */
  YYSYMBOL_id_list_const = 89,             /* id_list_const  */
  YYSYMBOL_90_3 = 90,                      /* $@3  */
  YYSYMBOL_91_4 = 91,                      /* $@4  */
  YYSYMBOL_class_declaration = 92,         /* class_declaration  */
  YYSYMBOL_93_5 = 93,                      /* $@5  */
  YYSYMBOL_class_modifier = 94,            /* class_modifier  */
  YYSYMBOL_super = 95,                     /* super  */
  YYSYMBOL_interface = 96,                 /* interface  */
  YYSYMBOL_interface_type_list = 97,       /* interface_type_list  */
  YYSYMBOL_class_body = 98,                /* class_body  */
  YYSYMBOL_99_6 = 99,                      /* $@6  */
  YYSYMBOL_class_body_declaration = 100,   /* class_body_declaration  */
  YYSYMBOL_fields = 101,                   /* fields  */
  YYSYMBOL_class_fields = 102,             /* class_fields  */
  YYSYMBOL_instance_fields = 103,          /* instance_fields  */
  YYSYMBOL_method = 104,                   /* method  */
  YYSYMBOL_105_7 = 105,                    /* $@7  */
  YYSYMBOL_106_8 = 106,                    /* $@8  */
  YYSYMBOL_107_9 = 107,                    /* $@9  */
  YYSYMBOL_method_modifier = 108,          /* method_modifier  */
  YYSYMBOL_formal_arguments = 109,         /* formal_arguments  */
  YYSYMBOL_param_list = 110,               /* param_list  */
  YYSYMBOL_statement = 111,                /* statement  */
  YYSYMBOL_compound_statement = 112,       /* compound_statement  */
  YYSYMBOL_113_10 = 113,                   /* $@10  */
  YYSYMBOL_compound_statement_body = 114,  /* compound_statement_body  */
  YYSYMBOL_object_declaration = 115,       /* object_declaration  */
  YYSYMBOL_116_11 = 116,                   /* $@11  */
  YYSYMBOL_117_12 = 117,                   /* $@12  */
  YYSYMBOL_simple_statement = 118,         /* simple_statement  */
  YYSYMBOL_name = 119,                     /* name  */
  YYSYMBOL_field_or_array_item = 120,      /* field_or_array_item  */
  YYSYMBOL_array_item = 121,               /* array_item  */
  YYSYMBOL_const_expr = 122,               /* const_expr  */
  YYSYMBOL_const_term = 123,               /* const_term  */
  YYSYMBOL_const_factor = 124,             /* const_factor  */
  YYSYMBOL_expression = 125,               /* expression  */
  YYSYMBOL_term = 126,                     /* term  */
  YYSYMBOL_factor = 127,                   /* factor  */
  YYSYMBOL_prefixOP = 128,                 /* prefixOP  */
  YYSYMBOL_postfixOP = 129,                /* postfixOP  */
  YYSYMBOL_method_invocation = 130,        /* method_invocation  */
  YYSYMBOL_arguments = 131,                /* arguments  */
  YYSYMBOL_arg_list = 132,                 /* arg_list  */
  YYSYMBOL_conditional_statement = 133,    /* conditional_statement  */
  YYSYMBOL_else = 134,                     /* else  */
  YYSYMBOL_boolean_expr = 135,             /* boolean_expr  */
  YYSYMBOL_infixOP = 136,                  /* infixOP  */
  YYSYMBOL_if_else_loop_statement = 137,   /* if_else_loop_statement  */
  YYSYMBOL_loop_statement = 138,           /* loop_statement  */
  YYSYMBOL_while = 139,                    /* while  */
  YYSYMBOL_for = 140,                      /* for  */
  YYSYMBOL_forInitOpt = 141,               /* forInitOpt  */
  YYSYMBOL_init_item = 142,                /* init_item  */
  YYSYMBOL_init_list = 143,                /* init_list  */
  YYSYMBOL_forUpdateOpt = 144,             /* forUpdateOpt  */
  YYSYMBOL_return_statement = 145          /* return_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    80,    81,    84,    87,    88,    89,    89,
      90,    93,    94,    95,    96,    97,    98,    99,   100,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     112,   113,   119,   120,   120,   125,   126,   127,   132,   133,
     134,   135,   138,   138,   139,   139,   146,   146,   149,   150,
     151,   152,   155,   156,   159,   160,   164,   165,   169,   169,
     172,   173,   174,   175,   176,   182,   183,   184,   187,   190,
     191,   192,   195,   195,   196,   196,   197,   197,   200,   201,
     202,   205,   206,   210,   211,   214,   215,   216,   217,   218,
     225,   225,   228,   229,   230,   231,   232,   233,   234,   237,
     243,   243,   244,   244,   252,   253,   254,   255,   256,   261,
     262,   265,   266,   269,   270,   272,   273,   274,   277,   278,
     279,   282,   283,   284,   285,   286,   287,   288,   293,   294,
     295,   298,   299,   300,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   318,   319,   320,
     321,   324,   325,   328,   332,   333,   337,   338,   343,   345,
     346,   353,   354,   358,   361,   362,   363,   364,   365,   366,
     369,   370,   373,   374,   377,   378,   384,   388,   389,   393,
     394,   398,   399,   402,   403,   406
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ADD", "INC", "MINUS",
  "DEC", "MUL", "DIV", "MOD", "AND", "OR", "NOT", "EQ", "NE", "LT", "LE",
  "GT", "GE", "ASSIGN", "BOOL", "BREAK", "BUTE", "CASE", "CATCH", "CLASS",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTENDS",
  "FALSE", "FINAL", "FINALLY", "FLOAT", "FOR", "IF", "IMPLEMENTS", "INT",
  "LONG", "MAIN", "NEW", "PRINT", "PRIVATE", "PROTECTED", "PUBLIC",
  "RETURN", "SHORT", "STATIC", "STRING", "SWITCH", "THIS", "TRUE", "TRY",
  "VOID", "WHILE", "COMMA", "COLON", "SEMICOLON", "LPAREN", "RPAREN",
  "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "INT_LIT", "FLOAT_LIT",
  "STRING_LIT", "ABSTRACT", "DOT", "READ", "CHAR", "ID_TOK",
  "LOWER_THAN_ELSE", "$accept", "lines", "start_structures",
  "start_structure", "variable_declaration", "$@1", "type", "wrong_EOF",
  "end_of_line", "id_item", "$@2", "id_list", "wrongIDlist",
  "id_list_const", "$@3", "$@4", "class_declaration", "$@5",
  "class_modifier", "super", "interface", "interface_type_list",
  "class_body", "$@6", "class_body_declaration", "fields", "class_fields",
  "instance_fields", "method", "$@7", "$@8", "$@9", "method_modifier",
  "formal_arguments", "param_list", "statement", "compound_statement",
  "$@10", "compound_statement_body", "object_declaration", "$@11", "$@12",
  "simple_statement", "name", "field_or_array_item", "array_item",
  "const_expr", "const_term", "const_factor", "expression", "term",
  "factor", "prefixOP", "postfixOP", "method_invocation", "arguments",
  "arg_list", "conditional_statement", "else", "boolean_expr", "infixOP",
  "if_else_loop_statement", "loop_statement", "while", "for", "forInitOpt",
  "init_item", "init_list", "forUpdateOpt", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-292)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-173)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      81,  -292,  -292,  -292,    51,  -292,    81,  -292,    36,  -292,
    -292,    47,  -292,   118,    55,    95,  -292,    84,    90,  -292,
     119,  -292,  -292,   121,   415,  -292,   145,  -292,   195,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,   195,  -292,  -292,  -292,
     125,   -33,   147,     9,  -292,  -292,   374,   195,  -292,  -292,
     159,   160,   202,   171,   175,     2,    94,     7,  -292,  -292,
    -292,   164,  -292,   111,   226,   190,     7,   237,   195,   183,
     240,   209,   160,  -292,  -292,  -292,  -292,  -292,   487,  -292,
    -292,  -292,   252,   199,  -292,  -292,  -292,   229,   200,   213,
     219,   257,   174,   195,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,   217,   174,  -292,
     208,  -292,   220,   195,   245,  -292,  -292,  -292,  -292,  -292,
      26,   222,  -292,  -292,   178,    18,  -292,  -292,   227,   195,
     178,   272,   235,  -292,  -292,   230,   195,   106,   232,   344,
     174,   174,   174,   174,   220,   238,   174,   241,   261,  -292,
     244,   249,   250,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
     344,   198,  -292,  -292,    27,    58,    33,   203,   139,  -292,
     242,  -292,   258,   265,    18,    18,  -292,  -292,  -292,   220,
     178,     7,   152,   335,   195,   263,   264,   271,   344,   195,
     276,  -292,   281,     5,   261,    46,   261,   261,  -292,   253,
     261,  -292,    34,    12,  -292,  -292,  -292,  -292,  -292,   278,
    -292,  -292,    15,  -292,  -292,  -292,   269,  -292,   344,   344,
     344,   344,    10,  -292,  -292,   344,  -292,  -292,  -292,  -292,
     289,  -292,   159,   -26,   186,   344,    97,   160,   344,   242,
    -292,   288,     7,  -292,  -292,  -292,  -292,   344,  -292,   296,
    -292,    80,   139,   139,  -292,  -292,   203,   158,   287,   343,
     303,  -292,   306,   305,   341,   307,    29,  -292,   310,   309,
     312,   291,  -292,   100,     7,  -292,   357,   344,   344,   -26,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,   344,   578,     7,
    -292,   578,     7,  -292,  -292,  -292,   344,   203,   318,  -292,
     203,  -292,  -292,   349,  -292,  -292,  -292,   362,   203,   242,
     559,  -292,   339,   218,   321,  -292,  -292,   195,  -292,  -292,
     578,   322,  -292,   317,   323,   326,  -292
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   111,   109,   110,     0,     2,     3,     5,     0,     1,
       4,     0,   106,   112,     0,   114,   113,     0,     0,   116,
     115,   118,   107,     0,     0,   117,     0,    13,     0,    12,
      11,    16,   140,   139,   138,    15,     0,    14,    17,    18,
     136,     0,     0,     0,   125,   126,     0,     0,   127,   124,
       0,     0,   160,     0,     0,    92,    95,     0,   119,   122,
     123,     0,   102,     0,    92,     0,     0,     0,   141,     0,
       0,     0,     0,    99,   101,   100,    98,    97,     0,    90,
     129,   132,     0,     0,   130,   128,   161,     0,     0,     0,
     142,     0,     0,   141,    96,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    91,     0,     0,   104,
       0,   143,     0,     0,     0,   185,   184,   181,   182,   183,
     186,     0,   170,   172,    94,   175,   178,   187,     0,   141,
     103,     0,     0,   150,   137,     0,     0,     0,     0,   214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,   171,   209,   207,   210,   208,   199,   198,
       0,   195,   196,   197,   194,     0,   206,   216,   188,   191,
       0,   204,     0,   215,   176,   177,   179,   180,   135,     0,
     105,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,   168,     0,   194,     0,     0,     0,     0,   145,     0,
       0,   146,     0,     0,   147,   148,   232,   233,   156,     0,
     173,   174,     0,   211,   212,   203,     0,   202,     0,     0,
       0,     0,   169,   201,   213,     0,   133,   163,   159,   235,
       0,   149,     0,   237,     0,     0,     0,     0,     0,     0,
     153,     0,     0,   157,   154,   151,   155,     0,   167,     0,
     200,   205,   189,   190,   192,   193,   217,     0,     0,     0,
       0,   241,   238,     0,     0,     0,     0,   245,     0,     0,
       0,     0,     7,     0,     0,    10,     0,     0,     0,     0,
     220,   224,   225,   226,   227,   228,   229,     0,     0,     0,
       6,     0,     0,     8,   164,   131,     0,   239,     0,   242,
     223,   231,   230,   218,   165,   234,   166,     0,   240,     0,
       0,   219,     0,     0,     0,   222,   221,     0,   243,   244,
       0,     0,   236,     0,     0,     0,     9
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,   382,  -292,  -292,  -292,   -24,  -292,   -65,  -292,
    -292,   -45,  -292,    98,  -292,  -292,   117,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,   102,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,   -88,  -292,   148,  -169,  -292,   -60,    50,
    -292,  -292,  -192,   -90,  -292,   -76,  -126,   -93,   -17,  -163,
     -52,   -51,  -292,   172,   -64,  -292,  -292,    31,  -292,  -291,
    -292,  -237,  -292,  -292,  -292,  -292,    60,  -292,  -292,  -292
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,     6,   254,   367,   255,   166,    80,    56,
      70,    57,    77,    63,    82,   191,   256,    13,     8,    15,
      18,    20,    22,    24,    42,    43,    44,    45,    46,   167,
      71,    53,    47,    89,    90,   257,   258,   208,   259,   260,
      66,    67,   261,   225,   182,   226,   184,   185,   186,   263,
     228,   229,   230,   277,   231,   232,   233,   264,   371,   325,
     347,   363,   265,   266,   267,   320,   321,   322,   374,   268
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    86,   181,   194,    50,   188,    65,   329,    78,  -169,
      26,  -169,    51,    78,   318,   278,   183,   279,   278,    41,
     279,   -93,    41,    61,  -169,   202,   203,    94,   187,    27,
      54,  -169,   278,  -169,   279,   238,   227,  -172,   273,  -172,
     274,    55,   190,    28,    88,    29,  -169,   358,   282,    30,
      31,     9,  -172,   307,    32,    33,    34,   272,    35,    36,
      37,    11,   273,  -134,   274,    38,  -169,    79,   197,    88,
     286,  -158,    79,   197,    48,  -120,   276,   310,   181,    52,
     240,   198,    39,    40,  -171,   296,  -171,  -169,  -169,   197,
     197,   349,   183,    48,  -172,   199,    48,   198,   276,  -171,
     278,   205,   279,   278,   187,   279,  -108,   234,   235,   301,
     181,   181,   181,   181,   365,     1,   181,     7,   262,   199,
      64,    12,   316,     7,   183,   183,   183,   183,     2,    16,
     183,   324,   326,   376,    17,   324,   187,   187,   187,   187,
     283,  -171,   187,   382,   333,    59,   280,   281,    60,   195,
      14,     3,    72,   262,   183,    21,   362,   327,    19,   362,
     354,    73,    74,    75,   262,    88,   262,   262,    76,    83,
     262,    84,   210,   211,   357,   324,   287,    23,   362,   361,
     212,   200,   361,   201,   360,   236,   237,   323,   362,   214,
     215,   216,   217,   368,   300,    25,   303,   304,   308,    52,
     306,   361,   273,   319,   274,    49,   278,   175,   279,   330,
     302,   361,   288,    58,   289,    27,    83,   183,   335,   218,
     292,  -162,   378,   183,   379,   297,   312,   313,   176,   314,
     315,    29,    68,    62,    64,    30,    31,   332,    81,    69,
     219,   177,   178,   179,    35,   -93,    37,   220,   180,   319,
      85,    38,   328,   221,   222,   223,    87,    91,   262,    92,
     224,   262,   242,   183,   214,   215,   216,   217,    39,   355,
      93,   168,   170,   169,   171,   172,   174,   173,   189,   373,
     262,    27,   192,   199,   364,   193,  -108,   366,   196,   204,
     262,   206,   243,   183,   218,   244,   207,    29,   245,   246,
     239,    30,    31,   241,   209,   247,   213,   269,     2,   248,
      35,   249,    37,   270,   271,   219,   282,    38,   250,   305,
     284,   251,   220,   285,   293,   294,   193,  -152,   221,   222,
     223,     3,   295,   252,    39,   253,   290,   298,   214,   215,
     216,   217,   299,   311,   278,   309,   279,   214,   215,   216,
     217,   289,   331,   381,   341,   342,   343,   344,   345,   346,
     334,   336,   337,   338,   339,   353,   243,   340,   218,   348,
     350,   351,   245,   246,   352,    26,   356,   218,   369,   247,
     370,   372,   377,   380,   384,   383,   386,   385,    10,   219,
     317,   291,   250,   275,    27,   251,   220,     0,   219,   359,
     193,   375,   221,   222,   223,   220,     0,   252,    28,   224,
      29,   221,   222,   223,    30,    31,    26,     0,   224,    32,
      33,    34,     0,    35,    36,    37,     0,     0,     0,     0,
      38,     0,     0,     0,     0,    27,     0,     0,     0,     0,
    -121,     0,     0,     0,     0,     0,     0,    39,    40,    28,
       0,    29,     0,     0,     0,    30,    31,     0,     0,     0,
      32,    33,    34,     0,    35,    36,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   214,   215,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,   215,   216,   217,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,     0,     0,   246,     0,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   219,     0,     0,     0,     0,     0,   251,
     220,     0,   247,     0,   193,     0,   221,   222,   223,     0,
       0,   252,   219,   224,     0,     0,     0,     0,   251,   220,
       0,     0,     0,   193,     0,   221,   222,   223,     0,     0,
     252,     0,   224
};

static const yytype_int16 yycheck[] =
{
      24,    66,    92,   172,    28,    93,    51,   298,     1,     4,
       1,     6,    36,     1,    40,     3,    92,     5,     3,    43,
       5,    19,    46,    47,    19,     7,     8,    72,    92,    20,
      63,     4,     3,     6,     5,   204,   199,     4,     4,     6,
       6,    74,   168,    34,    68,    36,    19,   338,    74,    40,
      41,     0,    19,    19,    45,    46,    47,   220,    49,    50,
      51,    25,     4,    61,     6,    56,    61,    60,    63,    93,
     239,    66,    60,    63,    24,    66,    71,    62,   168,    74,
     206,    71,    73,    74,     4,   248,     6,    61,    61,    63,
      63,    62,   168,    43,    61,    61,    46,    71,    71,    19,
       3,   189,     5,     3,   168,     5,    25,   200,   201,    63,
     200,   201,   202,   203,   351,    34,   206,     0,   208,    61,
      74,    74,   285,     6,   200,   201,   202,   203,    47,    74,
     206,   294,   295,   370,    39,   298,   200,   201,   202,   203,
     230,    61,   206,   380,   307,    43,     7,     8,    46,   173,
      32,    70,    58,   243,   230,    65,   348,    60,    74,   351,
      60,    67,    68,    69,   254,   189,   256,   257,    74,    58,
     260,    60,   196,    67,   337,   338,   241,    58,   370,   348,
      74,     3,   351,     5,   347,   202,   203,     1,   380,     3,
       4,     5,     6,   356,   254,    74,   256,   257,   263,    74,
     260,   370,     4,   293,     6,    60,     3,    33,     5,   299,
     255,   380,    60,    66,    62,    20,    58,   293,    60,    33,
     244,    19,     4,   299,     6,   249,   278,   279,    54,   280,
     281,    36,    61,    74,    74,    40,    41,   302,    74,    64,
      54,    67,    68,    69,    49,    19,    51,    61,    74,   339,
      60,    56,   297,    67,    68,    69,    19,    74,   348,    19,
      74,   351,     1,   339,     3,     4,     5,     6,    73,   334,
      61,    19,    43,    74,    74,    62,    19,    58,    61,   369,
     370,    20,    74,    61,   349,    65,    25,   352,    43,    62,
     380,    19,    31,   369,    33,    34,    61,    36,    37,    38,
      62,    40,    41,    62,    74,    44,    74,    63,    47,    48,
      49,    50,    51,    64,    64,    54,    74,    56,    57,    66,
      62,    60,    61,    58,    61,    61,    65,    66,    67,    68,
      69,    70,    61,    72,    73,    74,     1,    61,     3,     4,
       5,     6,    61,    74,     3,    67,     5,     3,     4,     5,
       6,    62,    64,   377,    13,    14,    15,    16,    17,    18,
      64,    74,    19,    60,    58,    74,    31,    62,    33,    62,
      60,    62,    37,    38,    62,     1,    19,    33,    60,    44,
      31,    19,    43,    62,    67,    63,    60,    64,     6,    54,
     292,   243,    57,   221,    20,    60,    61,    -1,    54,   339,
      65,   370,    67,    68,    69,    61,    -1,    72,    34,    74,
      36,    67,    68,    69,    40,    41,     1,    -1,    74,    45,
      46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    44,    -1,    65,    -1,    67,    68,    69,    -1,
      -1,    72,    54,    74,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    47,    70,    77,    78,    79,    92,    94,     0,
      78,    25,    74,    93,    32,    95,    74,    39,    96,    74,
      97,    65,    98,    58,    99,    74,     1,    20,    34,    36,
      40,    41,    45,    46,    47,    49,    50,    51,    56,    73,
      74,    82,   100,   101,   102,   103,   104,   108,   115,    60,
      82,    82,    74,   107,    63,    74,    85,    87,    66,   100,
     100,    82,    74,    89,    74,    87,   116,   117,    61,    64,
      86,   106,    58,    67,    68,    69,    74,    88,     1,    60,
      84,    74,    90,    58,    60,    60,    84,    19,    82,   109,
     110,    74,    19,    61,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    83,   105,    19,    74,
      43,    74,    62,    58,    19,    33,    54,    67,    68,    69,
      74,   119,   120,   121,   122,   123,   124,   130,   109,    61,
     122,    91,    74,    65,   112,    82,    43,    63,    71,    61,
       3,     5,     7,     8,    62,   109,    19,    61,   113,    74,
      82,    67,    74,    74,     3,     4,     5,     6,    33,    54,
      61,    67,    68,    69,    74,   119,   121,   125,   126,   127,
     128,   130,   131,   132,   123,   123,   124,   124,   112,    62,
     122,    62,     1,    31,    34,    37,    38,    44,    48,    50,
      57,    60,    72,    74,    80,    82,    92,   111,   112,   114,
     115,   118,   119,   125,   133,   138,   139,   140,   145,    63,
      64,    64,   125,     4,     6,   129,    71,   129,     3,     5,
       7,     8,    74,   119,    62,    58,   112,    84,    60,    62,
       1,   111,    82,    61,    61,    61,   125,    82,    61,    61,
     114,    63,    87,   114,   114,    66,   114,    19,    84,    67,
      62,    74,   126,   126,   127,   127,   125,    89,    40,   119,
     141,   142,   143,     1,   125,   135,   125,    60,    87,   135,
     119,    64,    84,   125,    64,    60,    74,    19,    60,    58,
      62,    13,    14,    15,    16,    17,    18,   136,    62,    62,
      60,    62,    62,    74,    60,    84,    19,   125,   135,   142,
     125,   112,   118,   137,    84,   137,    84,    81,   125,    60,
      31,   134,    19,   119,   144,   133,   137,    43,     4,     6,
      62,    82,   137,    63,    67,    64,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    80,    80,    81,    80,
      80,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    86,    85,    87,    87,    87,    88,    88,
      88,    88,    90,    89,    91,    89,    93,    92,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    99,    98,
     100,   100,   100,   100,   100,   101,   101,   101,   102,   103,
     103,   103,   105,   104,   106,   104,   107,   104,   108,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     113,   112,   114,   114,   114,   114,   114,   114,   114,   114,
     116,   115,   117,   115,   118,   118,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   126,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     128,   129,   129,   130,   131,   131,   132,   132,   133,   133,
     133,   134,   134,   135,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     4,     3,     0,    12,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     0,     4,     1,     3,     2,     1,     1,
       1,     1,     0,     4,     0,     6,     0,     7,     0,     1,
       1,     1,     0,     2,     0,     2,     1,     3,     0,     4,
       1,     1,     2,     2,     2,     1,     1,     1,     4,     3,
       4,    11,     0,     8,     0,     7,     0,     6,     1,     1,
       1,     0,     1,     2,     4,     1,     1,     1,     1,     2,
       0,     4,     0,     2,     2,     2,     1,     2,     1,     2,
       0,     4,     0,     9,     4,     5,     5,     2,     1,     1,
       1,     3,     1,     4,     4,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     1,     1,     3,     5,     6,
       4,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     2,     9,     0,     1,     3,
       4,     1,     3,     2,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 8: /* $@1: %empty  */
#line 89 "B113040047.y"
                                       {insert((yyvsp[0].stringVal));}
#line 1788 "y.tab.c"
    break;

  case 91: /* end_of_line: error wrong_EOF  */
#line 113 "B113040047.y"
                         {
		yyerror("statement without semicolon");
		yyerrok;
	}
#line 1797 "y.tab.c"
    break;

  case 92: /* id_item: ID_TOK  */
#line 119 "B113040047.y"
            {/*printf("insert ID at id_item: %s\n", $1);*/ insert((yyvsp[0].stringVal));}
#line 1803 "y.tab.c"
    break;

  case 93: /* $@2: %empty  */
#line 120 "B113040047.y"
            {insert((yyvsp[0].stringVal));}
#line 1809 "y.tab.c"
    break;

  case 97: /* id_list: id_item wrongIDlist  */
#line 127 "B113040047.y"
                             {
		yyerror("invalid variable declaration");
		yyerrok;
	}
#line 1818 "y.tab.c"
    break;

  case 102: /* $@3: %empty  */
#line 138 "B113040047.y"
            {/*printf("insert ID at id_list_const: %s\n", $1);*/insert((yyvsp[0].stringVal));}
#line 1824 "y.tab.c"
    break;

  case 104: /* $@4: %empty  */
#line 139 "B113040047.y"
                                {insert((yyvsp[0].stringVal));}
#line 1830 "y.tab.c"
    break;

  case 106: /* $@5: %empty  */
#line 146 "B113040047.y"
                                              {/*printf("insert ID: %s\n", $3);*/ insert((yyvsp[0].stringVal));}
#line 1836 "y.tab.c"
    break;

  case 118: /* $@6: %empty  */
#line 169 "B113040047.y"
                  {enterScope();}
#line 1842 "y.tab.c"
    break;

  case 119: /* class_body: LBRACE $@6 class_body_declaration RBRACE  */
#line 169 "B113040047.y"
                                                               {departScope();}
#line 1848 "y.tab.c"
    break;

  case 124: /* class_body_declaration: error SEMICOLON  */
#line 176 "B113040047.y"
                         {
		// printf("run class_body_declaration's yyerrok\n");
		yyerrok;
	}
#line 1857 "y.tab.c"
    break;

  case 132: /* $@7: %empty  */
#line 195 "B113040047.y"
                                   {/*printf("insert ID method: %s\n", $3);*/insert((yyvsp[0].stringVal));}
#line 1863 "y.tab.c"
    break;

  case 134: /* $@8: %empty  */
#line 196 "B113040047.y"
                     {/*printf("insert ID method: %s\n", $2);*/insert((yyvsp[0].stringVal));}
#line 1869 "y.tab.c"
    break;

  case 136: /* $@9: %empty  */
#line 197 "B113040047.y"
                {/*printf("insert ID method: %s\n", $1);*/insert((yyvsp[0].stringVal));}
#line 1875 "y.tab.c"
    break;

  case 149: /* statement: ELSE statement  */
#line 219 "B113040047.y"
        {
        yyerror("else without if");
        yyerrok;      /* 清除錯誤狀態，繼續解析後面的輸入 */
    }
#line 1884 "y.tab.c"
    break;

  case 150: /* $@10: %empty  */
#line 225 "B113040047.y"
                          {enterScope();}
#line 1890 "y.tab.c"
    break;

  case 151: /* compound_statement: LBRACE $@10 compound_statement_body RBRACE  */
#line 225 "B113040047.y"
                                                                        {departScope();}
#line 1896 "y.tab.c"
    break;

  case 158: /* compound_statement_body: ID_TOK  */
#line 234 "B113040047.y"
                {

	}
#line 1904 "y.tab.c"
    break;

  case 159: /* compound_statement_body: error SEMICOLON  */
#line 237 "B113040047.y"
                         {
		/*printf("compound_statement_body's yyerrok\n");*/
		yyerrok;
	}
#line 1913 "y.tab.c"
    break;

  case 160: /* $@11: %empty  */
#line 243 "B113040047.y"
                                 {/*printf("insert ID object_declaration: %s\n", $2);*/insert((yyvsp[0].stringVal));}
#line 1919 "y.tab.c"
    break;

  case 162: /* $@12: %empty  */
#line 244 "B113040047.y"
                       {/*printf("insert ID object_declaration: %s\n", $2);*/insert((yyvsp[0].stringVal));}
#line 1925 "y.tab.c"
    break;

  case 163: /* object_declaration: ID_TOK ID_TOK $@12 ASSIGN NEW ID_TOK LPAREN RPAREN end_of_line  */
#line 245 "B113040047.y"
        {
		if(strcmp((yyvsp[-8].stringVal), (yyvsp[-3].stringVal)))
		{
			printf("invalid object declaration.\n");
		}
	}
#line 1936 "y.tab.c"
    break;

  case 220: /* conditional_statement: IF LPAREN error RPAREN  */
#line 347 "B113040047.y"
        {
		yyerror("Invalid Boolean Expression");
		yyerrok;
	}
#line 1945 "y.tab.c"
    break;

  case 235: /* while: error RPAREN  */
#line 378 "B113040047.y"
                      {
		yyerror("Invalid Boolean Expression");
		yyerrok;
	}
#line 1954 "y.tab.c"
    break;


#line 1958 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 410 "B113040047.y"

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
