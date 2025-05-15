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

#line 86 "y.tab.c"

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
    ID = 325,                      /* ID  */
    ABSTRACT = 326,                /* ABSTRACT  */
    DOT = 327,                     /* DOT  */
    READ = 328                     /* READ  */
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
#define ID 325
#define ABSTRACT 326
#define DOT 327
#define READ 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "B113040047.y"

    float floatVal;
    int intVal;

#line 290 "y.tab.c"

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
  YYSYMBOL_ID = 70,                        /* ID  */
  YYSYMBOL_ABSTRACT = 71,                  /* ABSTRACT  */
  YYSYMBOL_DOT = 72,                       /* DOT  */
  YYSYMBOL_READ = 73,                      /* READ  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_lines = 75,                     /* lines  */
  YYSYMBOL_start_structures = 76,          /* start_structures  */
  YYSYMBOL_start_structure = 77,           /* start_structure  */
  YYSYMBOL_variable_declaration = 78,      /* variable_declaration  */
  YYSYMBOL_type = 79,                      /* type  */
  YYSYMBOL_id_list = 80,                   /* id_list  */
  YYSYMBOL_id_list_const = 81,             /* id_list_const  */
  YYSYMBOL_const_expr = 82,                /* const_expr  */
  YYSYMBOL_class_declaration = 83,         /* class_declaration  */
  YYSYMBOL_class_modifier = 84,            /* class_modifier  */
  YYSYMBOL_super = 85,                     /* super  */
  YYSYMBOL_interface = 86,                 /* interface  */
  YYSYMBOL_interface_type_list = 87,       /* interface_type_list  */
  YYSYMBOL_class_body = 88,                /* class_body  */
  YYSYMBOL_class_body_declaration = 89,    /* class_body_declaration  */
  YYSYMBOL_fields = 90,                    /* fields  */
  YYSYMBOL_class_fields = 91,              /* class_fields  */
  YYSYMBOL_instance_fields = 92,           /* instance_fields  */
  YYSYMBOL_method = 93,                    /* method  */
  YYSYMBOL_method_modifier = 94,           /* method_modifier  */
  YYSYMBOL_formal_arguments = 95,          /* formal_arguments  */
  YYSYMBOL_follow_formal_args = 96,        /* follow_formal_args  */
  YYSYMBOL_statement = 97,                 /* statement  */
  YYSYMBOL_compound_statement = 98,        /* compound_statement  */
  YYSYMBOL_compound_statement_body = 99,   /* compound_statement_body  */
  YYSYMBOL_variable_declarations = 100,    /* variable_declarations  */
  YYSYMBOL_statements = 101,               /* statements  */
  YYSYMBOL_simple_statement = 102,         /* simple_statement  */
  YYSYMBOL_name = 103,                     /* name  */
  YYSYMBOL_expression = 104,               /* expression  */
  YYSYMBOL_term = 105,                     /* term  */
  YYSYMBOL_factor = 106,                   /* factor  */
  YYSYMBOL_prefixOP = 107,                 /* prefixOP  */
  YYSYMBOL_postfixOP = 108,                /* postfixOP  */
  YYSYMBOL_method_invocation = 109,        /* method_invocation  */
  YYSYMBOL_arguments = 110,                /* arguments  */
  YYSYMBOL_conditional_statement = 111,    /* conditional_statement  */
  YYSYMBOL_else = 112,                     /* else  */
  YYSYMBOL_boolean_expr = 113,             /* boolean_expr  */
  YYSYMBOL_infixOP = 114,                  /* infixOP  */
  YYSYMBOL_if_else_loop_statement = 115,   /* if_else_loop_statement  */
  YYSYMBOL_loop_statement = 116,           /* loop_statement  */
  YYSYMBOL_while = 117,                    /* while  */
  YYSYMBOL_for = 118,                      /* for  */
  YYSYMBOL_forInitOpt = 119,               /* forInitOpt  */
  YYSYMBOL_follow_forInitOpt = 120,        /* follow_forInitOpt  */
  YYSYMBOL_forUpdateOpt = 121,             /* forUpdateOpt  */
  YYSYMBOL_return_statement = 122          /* return_statement  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    40,    41,    43,    45,    46,    47,    48,
      50,    51,    52,    53,    54,    55,    57,    58,    59,    61,
      62,    64,    66,    68,    69,    70,    72,    73,    75,    76,
      78,    79,    81,    83,    84,    85,    86,    88,    89,    91,
      93,    94,    96,    98,    99,   100,   102,   103,   105,   106,
     108,   109,   110,   111,   112,   113,   115,   117,   118,   120,
     121,   123,   124,   126,   127,   128,   129,   130,   131,   132,
     134,   135,   137,   138,   139,   141,   142,   143,   145,   146,
     147,   148,   149,   150,   152,   153,   154,   155,   157,   158,
     160,   162,   167,   168,   170,   172,   174,   175,   176,   177,
     178,   179,   181,   182,   184,   185,   187,   189,   191,   192,
     194,   195,   196,   198,   199,   201
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
  "STRING_LIT", "ID", "ABSTRACT", "DOT", "READ", "$accept", "lines",
  "start_structures", "start_structure", "variable_declaration", "type",
  "id_list", "id_list_const", "const_expr", "class_declaration",
  "class_modifier", "super", "interface", "interface_type_list",
  "class_body", "class_body_declaration", "fields", "class_fields",
  "instance_fields", "method", "method_modifier", "formal_arguments",
  "follow_formal_args", "statement", "compound_statement",
  "compound_statement_body", "variable_declarations", "statements",
  "simple_statement", "name", "expression", "term", "factor", "prefixOP",
  "postfixOP", "method_invocation", "arguments", "conditional_statement",
  "else", "boolean_expr", "infixOP", "if_else_loop_statement",
  "loop_statement", "while", "for", "forInitOpt", "follow_forInitOpt",
  "forUpdateOpt", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-153)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,  -153,  -153,  -153,     3,  -153,   -12,  -153,    23,  -153,
    -153,   -47,    -4,   -13,    27,  -153,   -10,    38,  -153,    40,
     177,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,    78,  -153,   -54,    50,   177,  -153,  -153,   177,    78,
      52,    43,   106,    77,  -153,  -153,  -153,    73,    77,    84,
       7,    52,    96,   144,  -153,  -153,  -153,  -153,     7,    11,
     139,   120,   101,  -153,   163,    97,  -153,    77,    78,   152,
    -153,     1,  -153,  -153,   126,  -153,  -153,     7,     7,     7,
       7,  -153,   129,   143,    78,  -153,  -153,   147,  -153,  -153,
     163,   163,    78,   149,   141,  -153,   150,  -153,   128,  -153,
     145,    78,    78,   160,   164,   169,     7,    78,   171,  -153,
     172,   195,   -49,   146,  -153,   168,  -153,  -153,  -153,    32,
      29,   167,  -153,  -153,  -153,  -153,  -153,   173,  -153,   170,
      -1,     7,     7,    37,    52,     7,   178,  -153,   174,    95,
    -153,  -153,   179,   181,     7,  -153,  -153,   223,   100,   180,
     224,   187,   123,   189,    28,  -153,   122,   190,   182,   191,
     185,  -153,  -153,  -153,    42,     7,   170,  -153,   230,     7,
       7,  -153,  -153,  -153,  -153,  -153,  -153,     7,    21,   196,
    -153,    21,   197,   239,  -153,   142,   201,     7,    41,   200,
     101,  -153,  -153,   231,  -153,  -153,  -153,   218,    41,    22,
    -153,   193,    21,  -153,    78,  -153,   194,   246,   204,   205,
    -153,   203,   249,     7,  -153,  -153,    21,   202,     7,    41,
    -153,   206,    41,  -153,   211,  -153,  -153
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    25,    23,    24,     0,     2,     3,     5,     0,     1,
       4,     0,    26,     0,    28,    27,     0,     0,    30,    29,
       0,    22,    31,    12,    11,    10,    15,    45,    44,    43,
      14,     0,    13,     0,     0,    33,    37,    38,    34,     0,
       0,     0,    17,    40,    32,    35,    36,     0,    39,     0,
       0,     0,     0,     0,    86,    84,    87,    85,     0,    78,
      18,     0,    21,    72,    75,     0,    83,    16,    46,     0,
      79,    21,    88,    89,     0,    82,    91,     0,     0,     0,
       0,    81,     0,     0,     0,    80,    71,     0,    72,    72,
      75,    75,    48,     0,     0,    90,     0,    47,    59,    42,
       0,    48,     0,     0,     0,     0,     0,     0,     0,    69,
       0,    59,     0,    61,    50,     0,    57,    58,    51,     0,
      21,    55,    52,    53,   104,   105,    54,     0,    49,     0,
       0,     0,     0,    21,     0,     0,     0,    60,     0,     0,
      62,    56,     0,     0,     0,    68,    41,     0,     0,     0,
       0,     0,    21,     0,    21,   115,     0,     0,    70,     0,
       0,     7,    66,    67,    21,     0,     0,     9,     0,     0,
       0,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       6,     0,     0,     0,    63,    79,    19,     0,    21,     0,
      21,   103,   102,    92,    64,   106,    65,     0,    21,     0,
     109,     0,     0,    93,     0,   108,     0,     0,     0,     0,
      94,     0,     0,     0,   113,   114,     0,     0,     0,    21,
     107,     0,    21,   111,     0,   112,     8
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,   266,  -153,  -153,   -31,   -33,   107,   -48,  -153,
    -153,  -153,  -153,  -153,  -153,    17,  -153,  -153,  -153,  -153,
    -153,  -153,   175,  -153,     2,  -153,   166,   161,   -40,   -93,
     -57,   109,   112,  -153,  -153,    -2,  -153,  -153,  -153,  -116,
    -153,  -152,  -153,  -153,  -153,  -153,  -114,  -153,  -153
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,   111,    33,    43,   148,    70,     7,
       8,    14,    17,    19,    21,    34,    35,    36,    37,    38,
      39,    83,    97,   113,   191,   115,   116,   117,   192,    61,
      62,    63,    64,    65,    75,    66,    87,   122,   203,   153,
     177,   193,   123,   124,   125,   151,   200,   209,   126
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    71,    60,     9,    77,   119,    78,    48,    47,    41,
      54,    55,    56,    57,   138,    72,    42,    73,    67,   157,
     119,    42,     1,    12,    54,    55,    56,    57,    13,   195,
     -70,    77,    77,    78,    78,     2,   142,    82,   143,   149,
      77,   120,    78,   159,    77,    77,    78,    78,    11,   133,
     210,   144,    45,    94,   189,    46,   120,    15,   118,     3,
      18,    96,   206,    85,   220,   105,    16,   112,    58,   150,
      96,   129,   -70,   118,   152,   154,   134,    59,   152,   139,
     112,   109,    58,    74,   205,   119,    98,   164,   119,   145,
     179,    59,   207,    76,   110,    99,   121,   155,    23,   199,
     114,   156,   184,    20,    77,   223,    78,    49,   225,   119,
      22,   121,   188,   152,    24,   114,    44,   185,    25,    26,
     190,   120,    42,   119,   120,    50,    77,    30,    78,    32,
     198,    54,    55,    56,    57,    51,   171,   172,   173,   174,
     175,   176,   -79,    52,   -79,   120,   -79,   -79,    23,    54,
      55,    56,    57,    51,    53,   161,   219,    68,   166,   120,
     167,   222,   102,    69,    24,   103,   104,    81,    25,    26,
      79,    80,   105,   211,   -83,   -83,   106,    30,   107,    32,
      51,    76,   180,   103,   104,   108,    88,    89,   109,    58,
     105,    90,    91,    98,   106,    84,    86,    23,    59,    92,
     -20,   110,   -20,   108,   100,    93,   109,    58,   214,    95,
     215,    98,   127,    24,    98,    23,    59,    25,    26,   110,
     101,   130,    27,    28,    29,   131,    30,    31,    32,   102,
     132,    24,   135,   136,   141,    25,    26,   146,   160,   162,
     147,   163,   165,   169,    30,   107,    32,   170,   158,   187,
     168,   178,   181,   182,    74,   183,   194,   196,   197,   166,
     201,   204,   202,   208,   212,   213,   217,   216,   218,   221,
     224,   226,    10,   186,   140,     0,   128,   137
};

static const yytype_int16 yycheck[] =
{
      31,    58,    50,     0,     3,    98,     5,    40,    39,    63,
       3,     4,     5,     6,    63,     4,    70,     6,    51,   135,
     113,    70,    34,    70,     3,     4,     5,     6,    32,   181,
      19,     3,     3,     5,     5,    47,     4,    68,     6,    40,
       3,    98,     5,   136,     3,     3,     5,     5,    25,   106,
     202,    19,    35,    84,   170,    38,   113,    70,    98,    71,
      70,    92,    40,    62,   216,    44,    39,    98,    61,    70,
     101,   102,    61,   113,   131,   132,   107,    70,   135,   112,
     111,    60,    61,    72,   198,   178,    65,   144,   181,    60,
      62,    70,    70,    61,    73,    93,    98,    60,    20,    58,
      98,   134,    60,    65,     3,   219,     5,    64,   222,   202,
      70,   113,   169,   170,    36,   113,    66,   165,    40,    41,
     177,   178,    70,   216,   181,    19,     3,    49,     5,    51,
     187,     3,     4,     5,     6,    58,    13,    14,    15,    16,
      17,    18,     3,    70,     5,   202,     7,     8,    20,     3,
       4,     5,     6,    58,    70,    60,   213,    61,    58,   216,
      60,   218,    34,    19,    36,    37,    38,    70,    40,    41,
       7,     8,    44,   204,     7,     8,    48,    49,    50,    51,
      58,    61,    60,    37,    38,    57,    77,    78,    60,    61,
      44,    79,    80,    65,    48,    43,    70,    20,    70,    70,
      58,    73,    60,    57,    63,    62,    60,    61,     4,    62,
       6,    65,    67,    36,    65,    20,    70,    40,    41,    73,
      70,    61,    45,    46,    47,    61,    49,    50,    51,    34,
      61,    36,    61,    61,    66,    40,    41,    64,    64,    60,
      70,    60,    19,    19,    49,    50,    51,    60,    70,    19,
      70,    62,    62,    62,    72,    70,    60,    60,    19,    58,
      60,    43,    31,    70,    70,    19,    63,    62,    19,    67,
      64,    60,     6,   166,   113,    -1,   101,   111
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    47,    71,    75,    76,    77,    83,    84,     0,
      76,    25,    70,    32,    85,    70,    39,    86,    70,    87,
      65,    88,    70,    20,    36,    40,    41,    45,    46,    47,
      49,    50,    51,    79,    89,    90,    91,    92,    93,    94,
      79,    63,    70,    80,    66,    89,    89,    79,    80,    64,
      19,    58,    70,    70,     3,     4,     5,     6,    61,    70,
      82,   103,   104,   105,   106,   107,   109,    80,    61,    19,
      82,   104,     4,     6,    72,   108,    61,     3,     5,     7,
       8,    70,    79,    95,    43,    62,    70,   110,   105,   105,
     106,   106,    70,    62,    79,    62,    79,    96,    65,    98,
      63,    70,    34,    37,    38,    44,    48,    50,    57,    60,
      73,    78,    79,    97,    98,    99,   100,   101,   102,   103,
     104,   109,   111,   116,   117,   118,   122,    67,    96,    79,
      61,    61,    61,   104,    79,    61,    61,   100,    63,    80,
     101,    66,     4,     6,    19,    60,    64,    70,    81,    40,
      70,   119,   104,   113,   104,    60,    80,   113,    70,   103,
      64,    60,    60,    60,   104,    19,    58,    60,    70,    19,
      60,    13,    14,    15,    16,    17,    18,   114,    62,    62,
      60,    62,    62,    70,    60,    82,    81,    19,   104,   113,
     104,    98,   102,   115,    60,   115,    60,    19,   104,    58,
     120,    60,    31,   112,    43,   120,    40,    70,    70,   121,
     115,    79,    70,    19,     4,     6,    62,    63,    19,   104,
     115,    67,   104,   120,    64,   120,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    81,
      81,    82,    83,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    89,    89,    89,    89,    90,    90,    91,
      92,    92,    93,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   108,   108,
     109,   110,   111,   111,   112,   113,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   118,   119,   119,
     120,   120,   120,   121,   121,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     4,     3,    11,     4,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
       3,     1,     6,     1,     1,     1,     0,     2,     0,     2,
       1,     2,     3,     1,     1,     2,     2,     1,     1,     3,
       2,    10,     7,     1,     1,     1,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     0,
       2,     0,     2,     4,     5,     5,     3,     3,     2,     1,
       1,     3,     1,     3,     3,     1,     3,     3,     1,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     0,     5,     6,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     9,     5,     4,
       0,     5,     6,     2,     2,     3
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

#line 1563 "y.tab.c"

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

#line 204 "B113040047.y"

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
