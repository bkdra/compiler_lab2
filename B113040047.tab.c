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

#line 100 "B113040047.tab.c"

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

#include "B113040047.tab.h"
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
  YYSYMBOL_ID_TOK = 70,                    /* ID_TOK  */
  YYSYMBOL_ABSTRACT = 71,                  /* ABSTRACT  */
  YYSYMBOL_DOT = 72,                       /* DOT  */
  YYSYMBOL_READ = 73,                      /* READ  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_lines = 75,                     /* lines  */
  YYSYMBOL_start_structures = 76,          /* start_structures  */
  YYSYMBOL_start_structure = 77,           /* start_structure  */
  YYSYMBOL_variable_declaration = 78,      /* variable_declaration  */
  YYSYMBOL_type = 79,                      /* type  */
  YYSYMBOL_id_item = 80,                   /* id_item  */
  YYSYMBOL_id_list = 81,                   /* id_list  */
  YYSYMBOL_id_list_const = 82,             /* id_list_const  */
  YYSYMBOL_const_expr = 83,                /* const_expr  */
  YYSYMBOL_class_declaration = 84,         /* class_declaration  */
  YYSYMBOL_class_modifier = 85,            /* class_modifier  */
  YYSYMBOL_super = 86,                     /* super  */
  YYSYMBOL_interface = 87,                 /* interface  */
  YYSYMBOL_interface_type_list = 88,       /* interface_type_list  */
  YYSYMBOL_class_body = 89,                /* class_body  */
  YYSYMBOL_class_body_declaration = 90,    /* class_body_declaration  */
  YYSYMBOL_fields = 91,                    /* fields  */
  YYSYMBOL_class_fields = 92,              /* class_fields  */
  YYSYMBOL_instance_fields = 93,           /* instance_fields  */
  YYSYMBOL_method = 94,                    /* method  */
  YYSYMBOL_method_modifier = 95,           /* method_modifier  */
  YYSYMBOL_formal_arguments = 96,          /* formal_arguments  */
  YYSYMBOL_param_list = 97,                /* param_list  */
  YYSYMBOL_statement = 98,                 /* statement  */
  YYSYMBOL_compound_statement = 99,        /* compound_statement  */
  YYSYMBOL_compound_statement_body = 100,  /* compound_statement_body  */
  YYSYMBOL_simple_statement = 101,         /* simple_statement  */
  YYSYMBOL_name = 102,                     /* name  */
  YYSYMBOL_expression = 103,               /* expression  */
  YYSYMBOL_term = 104,                     /* term  */
  YYSYMBOL_factor = 105,                   /* factor  */
  YYSYMBOL_prefixOP = 106,                 /* prefixOP  */
  YYSYMBOL_postfixOP = 107,                /* postfixOP  */
  YYSYMBOL_method_invocation = 108,        /* method_invocation  */
  YYSYMBOL_arguments = 109,                /* arguments  */
  YYSYMBOL_arg_list = 110,                 /* arg_list  */
  YYSYMBOL_conditional_statement = 111,    /* conditional_statement  */
  YYSYMBOL_else = 112,                     /* else  */
  YYSYMBOL_boolean_expr = 113,             /* boolean_expr  */
  YYSYMBOL_infixOP = 114,                  /* infixOP  */
  YYSYMBOL_if_else_loop_statement = 115,   /* if_else_loop_statement  */
  YYSYMBOL_loop_statement = 116,           /* loop_statement  */
  YYSYMBOL_while = 117,                    /* while  */
  YYSYMBOL_for = 118,                      /* for  */
  YYSYMBOL_forInitOpt = 119,               /* forInitOpt  */
  YYSYMBOL_init_item = 120,                /* init_item  */
  YYSYMBOL_init_list = 121,                /* init_list  */
  YYSYMBOL_forUpdateOpt = 122,             /* forUpdateOpt  */
  YYSYMBOL_return_statement = 123          /* return_statement  */
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
#define YYLAST   262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

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
static const yytype_int16 yyrline[] =
{
       0,    61,    61,    64,    65,    68,    71,    72,    73,    74,
      77,    78,    79,    80,    81,    82,    89,    90,    95,    96,
     101,   102,   107,   108,   109,   110,   111,   115,   118,   119,
     120,   121,   124,   125,   128,   129,   133,   134,   138,   141,
     142,   143,   144,   147,   148,   151,   154,   155,   156,   159,
     162,   163,   164,   167,   168,   172,   173,   176,   177,   178,
     179,   180,   183,   186,   187,   188,   192,   193,   194,   195,
     196,   199,   200,   203,   204,   205,   208,   209,   210,   213,
     214,   215,   216,   217,   218,   221,   222,   223,   224,   227,
     228,   231,   235,   236,   240,   241,   244,   245,   248,   251,
     254,   255,   256,   257,   258,   259,   262,   263,   266,   267,
     270,   273,   277,   278,   282,   283,   287,   288,   291,   292,
     295
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
  "STRING_LIT", "ID_TOK", "ABSTRACT", "DOT", "READ", "$accept", "lines",
  "start_structures", "start_structure", "variable_declaration", "type",
  "id_item", "id_list", "id_list_const", "const_expr", "class_declaration",
  "class_modifier", "super", "interface", "interface_type_list",
  "class_body", "class_body_declaration", "fields", "class_fields",
  "instance_fields", "method", "method_modifier", "formal_arguments",
  "param_list", "statement", "compound_statement",
  "compound_statement_body", "simple_statement", "name", "expression",
  "term", "factor", "prefixOP", "postfixOP", "method_invocation",
  "arguments", "arg_list", "conditional_statement", "else", "boolean_expr",
  "infixOP", "if_else_loop_statement", "loop_statement", "while", "for",
  "forInitOpt", "init_item", "init_list", "forUpdateOpt",
  "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,  -122,  -122,  -122,    18,  -122,    -4,  -122,     4,  -122,
    -122,     3,    34,    15,    64,  -122,    39,    54,  -122,    65,
     150,  -122,    60,  -122,    -5,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,    -5,  -122,   -18,    61,   150,  -122,  -122,   150,
      -5,  -122,    73,    77,    70,   131,  -122,    40,  -122,  -122,
    -122,    81,   135,    57,    58,    97,     9,    77,  -122,   110,
       9,   109,  -122,  -122,   168,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,    -5,  -122,   169,   146,   122,   136,   144,     9,
      -5,  -122,   138,    -5,  -122,   141,    88,  -122,   139,   143,
    -122,  -122,  -122,  -122,    -5,   145,   147,   151,   160,    -5,
     152,  -122,   160,     0,   161,    88,   -12,  -122,    88,  -122,
     157,  -122,   -14,    19,    32,  -122,   154,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,   162,    73,     1,   160,   160,   164,
      22,    77,   160,     6,  -122,  -122,   163,  -122,   165,  -122,
     167,    75,  -122,  -122,   160,   160,   160,   160,  -122,   160,
     160,  -122,   172,    86,   166,   192,   174,  -122,   180,   202,
     175,     7,  -122,   114,   178,  -122,  -122,   170,   181,   171,
    -122,    23,   177,   182,   187,    32,    32,  -122,  -122,  -122,
    -122,   220,   160,   160,     1,  -122,  -122,  -122,  -122,  -122,
    -122,   160,   108,   186,  -122,   108,   188,   228,  -122,  -122,
     160,   160,   177,   189,  -122,   177,  -122,  -122,   219,  -122,
    -122,  -122,   208,   177,   177,   183,   108,  -122,    -5,   179,
     190,  -122,   191,  -122,  -122,   108,   193,  -122,   194,   195,
    -122
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    31,    29,    30,     0,     2,     3,     5,     0,     1,
       4,     0,    32,     0,    34,    33,     0,     0,    36,    35,
       0,    27,     0,    12,     0,    11,    10,    15,    52,    51,
      50,    14,     0,    13,     0,     0,    39,    43,    44,    40,
       0,    37,     0,     0,     0,    16,    18,     0,    38,    41,
      42,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,     0,    47,    45,     0,    26,    25,    22,    23,    24,
      17,    19,    53,    20,     0,     0,     0,     0,    54,     0,
       0,    55,     0,     0,    21,     0,    63,    49,     0,     0,
      87,    85,    88,    86,     0,     0,     0,     0,     0,     0,
       0,    70,     0,    79,     0,    63,     0,    80,    63,    57,
       0,    58,     0,     0,    73,    76,     0,    84,    59,    60,
     108,   109,    61,    56,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,    89,    90,     0,    83,     0,    64,
       0,     0,    65,    62,     0,    92,     0,     0,    69,     0,
       0,    82,     0,     0,     0,     0,     0,   116,   113,     0,
       0,     0,   120,     0,     0,    81,    72,    71,     0,     0,
       7,     0,    94,     0,    93,    74,    75,    77,    78,    48,
       9,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     6,     0,     0,     0,    66,    91,
       0,     0,   114,     0,   117,    99,   107,   106,    96,    67,
     110,    68,     0,    95,   115,     0,     0,    97,     0,     0,
       0,    98,     0,   118,   119,     0,     0,   111,     0,     0,
       8
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,   250,  -122,  -122,   -24,   200,   -41,   134,    41,
    -122,  -122,  -122,  -122,  -122,  -122,   -22,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,   -48,   -19,    -6,   -85,   -95,
     -92,    10,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -119,
    -122,  -121,  -122,  -122,  -122,  -122,    78,  -122,  -122,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,   105,    34,    46,    47,    53,   107,
       7,     8,    14,    17,    19,    21,    35,    36,    37,    38,
      39,    40,    77,    78,   108,   206,   110,   207,   129,   113,
     114,   115,   116,   137,   117,   173,   174,   118,   217,   160,
     191,   208,   119,   120,   121,   156,   157,   158,   220,   122
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   112,    54,   130,   134,   144,   135,   133,    43,   146,
     146,   147,   147,   164,    49,    23,    51,    50,     9,   -71,
     112,   -28,   146,   112,   147,   146,   146,   147,   147,    11,
       1,    25,   159,   161,    87,    26,    27,   159,   109,   149,
     150,   154,    65,     2,    31,    44,    33,   145,    76,   171,
     172,   140,    45,   168,   175,   176,    85,   109,    45,    88,
     109,   -71,   106,    66,   203,   141,    13,     3,   165,   193,
     125,   155,   136,    12,   210,   131,    67,    68,    69,   148,
     111,   106,   162,   198,   106,    15,   139,   202,   159,   142,
     163,    90,    91,    92,    93,   221,   205,    70,    57,   111,
      58,    73,   111,    16,   227,   213,   214,   112,    23,    18,
     112,    90,    91,    92,    93,    61,    57,    62,    63,    20,
      84,    65,    94,    22,    25,    95,    96,    48,    26,    27,
      41,   112,    97,    57,    55,   170,    98,    31,    99,    33,
     112,    65,    66,    52,    61,   100,   180,    45,   101,   102,
      56,    59,    97,    86,    60,    67,    68,    69,   103,   177,
     178,   104,    66,    90,    91,    92,    93,    64,   101,   102,
      23,    72,    57,    86,   194,    67,    68,    69,   103,    74,
     146,   104,   147,   223,    24,   224,    25,    75,    79,    80,
      26,    27,    81,    65,   222,    28,    29,    30,    82,    31,
      32,    33,    83,    86,    89,   146,   126,   147,   127,   123,
     124,   182,   128,   132,    66,   185,   186,   187,   188,   189,
     190,   102,   138,   143,   151,   145,   152,    67,    68,    69,
     103,   169,   179,   166,   183,   167,   181,   192,   184,   201,
     195,   197,   136,   196,   199,   200,   209,   212,   211,   215,
     216,   218,   225,   219,   226,   230,    10,    71,   229,   153,
     228,     0,   204
};

static const yytype_int16 yycheck[] =
{
      24,    86,    43,    98,     4,    19,     6,   102,    32,     3,
       3,     5,     5,   132,    36,    20,    40,    39,     0,    19,
     105,    25,     3,   108,     5,     3,     3,     5,     5,    25,
      34,    36,   127,   128,    82,    40,    41,   132,    86,     7,
       8,    40,    33,    47,    49,    63,    51,    61,    72,   144,
     145,    63,    70,   138,   146,   147,    80,   105,    70,    83,
     108,    61,    86,    54,   183,   106,    32,    71,    62,    62,
      94,    70,    72,    70,   195,    99,    67,    68,    69,    60,
      86,   105,    60,    60,   108,    70,   105,   182,   183,   108,
     131,     3,     4,     5,     6,   216,   191,    56,    58,   105,
      60,    60,   108,    39,   225,   200,   201,   192,    20,    70,
     195,     3,     4,     5,     6,    58,    58,    60,    60,    65,
      79,    33,    34,    58,    36,    37,    38,    66,    40,    41,
      70,   216,    44,    58,    64,    60,    48,    49,    50,    51,
     225,    33,    54,    70,    58,    57,    60,    70,    60,    61,
      19,    70,    44,    65,    19,    67,    68,    69,    70,   149,
     150,    73,    54,     3,     4,     5,     6,    70,    60,    61,
      20,    61,    58,    65,    60,    67,    68,    69,    70,    70,
       3,    73,     5,     4,    34,     6,    36,    19,    19,    43,
      40,    41,    70,    33,   218,    45,    46,    47,    62,    49,
      50,    51,    58,    65,    63,     3,    61,     5,    61,    70,
      67,    19,    61,    61,    54,    13,    14,    15,    16,    17,
      18,    61,    61,    66,    70,    61,    64,    67,    68,    69,
      70,    64,    60,    70,    60,    70,    70,    62,    58,    19,
      62,    70,    72,    62,    62,    58,    60,    19,    60,    60,
      31,    43,    62,    70,    63,    60,     6,    57,    64,   125,
      67,    -1,   184
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    47,    71,    75,    76,    77,    84,    85,     0,
      76,    25,    70,    32,    86,    70,    39,    87,    70,    88,
      65,    89,    58,    20,    34,    36,    40,    41,    45,    46,
      47,    49,    50,    51,    79,    90,    91,    92,    93,    94,
      95,    70,    79,    79,    63,    70,    80,    81,    66,    90,
      90,    79,    70,    82,    81,    64,    19,    58,    60,    70,
      19,    58,    60,    60,    70,    33,    54,    67,    68,    69,
      83,    80,    61,    83,    70,    19,    79,    96,    97,    19,
      43,    70,    62,    58,    83,    79,    65,    99,    79,    63,
       3,     4,     5,     6,    34,    37,    38,    44,    48,    50,
      57,    60,    61,    70,    73,    78,    79,    83,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   108,   111,   116,
     117,   118,   123,    70,    67,    79,    61,    61,    61,   102,
     103,    79,    61,   103,     4,     6,    72,   107,    61,   100,
      63,    81,   100,    66,    19,    61,     3,     5,    60,     7,
       8,    70,    64,    82,    40,    70,   119,   120,   121,   103,
     113,   103,    60,    81,   113,    62,    70,    70,   102,    64,
      60,   103,   103,   109,   110,   104,   104,   105,   105,    60,
      60,    70,    19,    60,    58,    13,    14,    15,    16,    17,
      18,   114,    62,    62,    60,    62,    62,    70,    60,    62,
      58,    19,   103,   113,   120,   103,    99,   101,   115,    60,
     115,    60,    19,   103,   103,    60,    31,   112,    43,    70,
     122,   115,    79,     4,     6,    62,    63,   115,    67,    64,
      60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    83,    83,    83,    84,    85,    85,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    90,
      90,    90,    90,    91,    91,    92,    93,    93,    93,    94,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      98,    98,    99,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   103,   103,   103,   104,   104,   104,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   107,
     107,   108,   109,   109,   110,   110,   111,   111,   112,   113,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     4,     3,    11,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     5,     1,     1,     1,     1,     1,     6,     0,     1,
       1,     1,     0,     2,     0,     2,     1,     3,     3,     1,
       1,     2,     2,     1,     1,     4,     3,     4,    11,     7,
       1,     1,     1,     0,     1,     2,     4,     1,     1,     1,
       1,     1,     3,     0,     2,     2,     4,     5,     5,     2,
       1,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       1,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     0,     1,     1,     3,     5,     6,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     9,     0,     1,     3,     4,     1,     3,     2,     2,
       3
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

#line 1386 "B113040047.tab.c"

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

#line 299 "B113040047.y"

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
