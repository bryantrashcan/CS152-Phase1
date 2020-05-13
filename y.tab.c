/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "minil.y" /* yacc.c:339  */

/*valid c code declaration*/
#include <stdio.h>
extern FILE * yyin;
extern int currLine;
extern int currPos;
void yyerror(const char *msg);


#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    BEGINLOOP = 274,
    ENDLOOP = 275,
    CONTINUE = 276,
    FOR = 277,
    READ = 278,
    WRITE = 279,
    RETURN = 280,
    AND = 281,
    OR = 282,
    NOT = 283,
    TRUE = 284,
    FALSE = 285,
    SUB = 286,
    ADD = 287,
    MULT = 288,
    DIV = 289,
    MOD = 290,
    EQ = 291,
    NEQ = 292,
    LT = 293,
    GT = 294,
    LTE = 295,
    GTE = 296,
    SEMICOLON = 297,
    COLON = 298,
    COMMA = 299,
    L_PAREN = 300,
    R_PAREN = 301,
    L_SQUARE_BRACKET = 302,
    R_SQUARE_BRACKET = 303,
    ASSIGN = 304,
    NUMBER = 305,
    IDENT = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "minil.y" /* yacc.c:355  */

	char * cVal;
	int iVal;

#line 173 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    39,    40,    42,    48,    49,    51,    52,
      54,    55,    57,    58,    64,    66,    67,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    79,    81,    82,    83,
      84,    85,    86,    88,    89,    90,    92,    93,    94,    96,
      97,    98,   100,   101,   102,   104,   105,   106,   108,   110,
     112,   113,   114,   116,   117,   118,   121,   122,   123,   124,
     125,   126,   128,   129,   130,   131,   132,   133,   136,   138,
     139,   141,   142,   146,   147,   148,   149,   150,   153,   154,
     155,   156,   157,   158,   160,   161,   162,   163,   164,   165,
     167,   168,   169,   170
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "FOR", "READ", "WRITE", "RETURN", "AND", "OR",
  "NOT", "TRUE", "FALSE", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ",
  "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN",
  "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "NUMBER",
  "IDENT", "$accept", "program_start", "functions", "function",
  "declare_loop", "ident_loop", "dclr_choice", "dclr_choice2", "stmt_loop",
  "choose_tostop", "stmt_options", "s1", "s2", "s2_choice", "s2_choice2",
  "s3", "s3_choice", "s4", "s4_choice", "s5", "s5_choice", "s6",
  "s6_choice", "s7", "s7_choice", "s8", "s9", "bool_expr", "bool_choice",
  "relation_and_expr", "relandexpr_choice", "relation_expr", "rel_choice",
  "comp", "var", "var_choice", "var_choice2", "expression", "expr_choice",
  "expr_choice2", "multiplicative_expression", "mult_choice",
  "mult_choice2", "term", "term_choice", "term_choice2", "term_comma", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -56

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -33,    20,   -56,     3,    -2,   -56,   -56,    38,    -3,
       6,    48,     5,    14,    52,     6,    49,    -3,   -56,    12,
      53,    64,    22,    31,    68,    32,    -3,    71,    30,   -56,
      -6,    -6,    60,   -56,    39,    39,    39,    -4,    34,    74,
      55,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
      50,    51,    86,   118,   -56,   -56,   -34,    -6,   -56,   -26,
      88,    76,    78,   -56,   -56,   134,   -18,   -30,   -56,    89,
      71,    58,    65,    67,    -4,   -56,    -4,   -56,   -56,    71,
      -4,    69,   -56,   -56,   -56,    70,    29,    -4,    71,    -6,
     -56,    -6,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    -4,
     -56,   -56,   -56,    -4,   -56,   -56,   -56,   -56,    -4,    71,
      73,    75,    39,   -56,    39,   -56,    77,    82,   -56,   -56,
     -56,   -56,   -56,   -56,    80,    90,    79,    76,    78,   -56,
     -18,   -30,    93,    71,    95,    65,    67,    85,    -4,   -56,
     -56,    13,   -56,   -56,   -56,   -56,    71,    97,   122,    -6,
     -56,   -56,    -4,   -56,   -56,    71,   101,   130,   108,   131,
      71,   135,   111,   110,   114,    13,   -56,    71,   -56,   -56,
      -6,    39,   -56,    71,   -56,   -56,   -56,   112,   123,   -56,
      -4,    71,   141,   -56,    71,   124,    71,   125,   144,    71,
     -56,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
       8,     0,     0,     0,     0,     8,    10,     6,     9,     0,
       0,     0,     0,     0,     0,     0,     6,     0,    12,     7,
       0,     0,     0,    48,     0,     0,     0,     0,    69,     0,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,    59,    60,     0,     0,    88,    69,
       0,    51,    54,    56,    87,     0,    74,    79,    84,     0,
       0,     0,    43,    46,     0,    49,     0,    68,     5,    15,
       0,     0,    11,    57,    85,     0,     0,    90,     0,     0,
      50,     0,    53,    62,    63,    64,    65,    66,    67,     0,
      77,    76,    73,     0,    83,    82,    81,    78,     0,     0,
       0,     0,     0,    42,     0,    45,     0,     0,    16,    14,
      26,    13,    61,    89,    92,     0,     0,    51,    54,    58,
      74,    79,     0,    37,     0,    43,    46,    71,    90,    91,
      86,    28,    52,    55,    75,    80,    34,     0,     0,     0,
      44,    47,     0,    70,    93,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    28,    27,    34,    33,    38,
       0,     0,    72,    31,    29,    35,    36,     0,     0,    30,
       0,    31,     0,    32,     0,     0,    40,     0,     0,    40,
      39,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,   172,   -56,   -16,   162,   -56,   -56,    99,   -56,
     -55,   -56,   -56,    15,     0,   -56,    16,   -56,    19,   -56,
      -7,   -56,    54,   -56,    56,   -56,   -56,   -29,    57,    96,
      59,   100,   133,   -56,   -27,   -56,   -56,   -25,    63,   -56,
      87,    66,   -56,    91,   132,    62,   -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    13,    20,    52,    39,   119,
      40,    41,    42,   157,   179,    43,   159,    44,   148,    45,
     188,    46,   113,    47,   115,    48,    49,    60,    90,    61,
      92,    62,    63,    99,    64,    77,   153,    65,   102,   103,
      66,   107,   108,    67,    68,   125,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,    21,    69,   104,   105,   106,     1,    71,    72,    73,
      29,    74,    75,   100,   101,   110,    58,    38,     5,    87,
       6,    76,    53,    54,    55,    56,    30,    56,    85,   155,
      31,    32,    86,   126,    33,    34,    35,    36,    37,    57,
       8,    74,     9,    50,    58,    59,    58,    59,    10,   116,
      12,   117,    50,    14,   132,   120,    15,    16,    17,    22,
      19,    50,   124,    23,    38,    93,    94,    95,    96,    97,
      98,    24,    25,    26,   129,   123,    27,    51,   147,    70,
      28,    76,    50,    78,    30,   135,   156,   136,    31,    32,
      38,   158,    33,    34,    35,    36,    37,    79,    82,    80,
     164,    81,    88,    89,    91,   147,    50,   111,   109,   112,
     156,   114,   158,   124,    50,   133,   122,   121,   178,    50,
     162,   141,    38,   123,   138,   134,   178,   163,    50,   185,
     137,   187,   152,    50,   187,   146,   140,   149,    50,   160,
      50,   176,   161,   165,   177,   166,    50,    54,    55,    56,
     167,   168,   170,   171,    50,   182,   173,    50,   172,    50,
     184,   180,    50,    57,   190,   181,   186,   189,    58,    59,
      93,    94,    95,    96,    97,    98,     7,    18,   118,   169,
     174,   183,   191,   175,   142,   127,    83,   143,    84,   150,
     130,   128,   151,   144,     0,     0,     0,   145,     0,   131,
     154
};

static const yytype_int16 yycheck[] =
{
      27,    17,    31,    33,    34,    35,     3,    34,    35,    36,
      26,    45,    37,    31,    32,    70,    50,    51,    51,    45,
       0,    47,    28,    29,    30,    31,    13,    31,    57,    16,
      17,    18,    57,    88,    21,    22,    23,    24,    25,    45,
      42,    45,     4,    70,    50,    51,    50,    51,    51,    74,
      44,    76,    79,     5,   109,    80,    51,    43,     6,    47,
      11,    88,    87,    10,    51,    36,    37,    38,    39,    40,
      41,     7,    50,    42,    99,    46,     8,    47,   133,    19,
      48,    47,   109,     9,    13,   112,   141,   114,    17,    18,
      51,   146,    21,    22,    23,    24,    25,    42,    12,    49,
     155,    50,    14,    27,    26,   160,   133,    49,    19,    44,
     165,    44,   167,   138,   141,    42,    46,    48,   173,   146,
     149,    42,    51,    46,    44,    50,   181,   152,   155,   184,
      48,   186,    47,   160,   189,    42,    46,    42,   165,    42,
     167,   170,    20,    42,   171,    15,   173,    29,    30,    31,
      42,    20,    17,    42,   181,   180,    42,   184,    48,   186,
      19,    49,   189,    45,    20,    42,    42,    42,    50,    51,
      36,    37,    38,    39,    40,    41,     4,    15,    79,   160,
     165,   181,   189,   167,   127,    89,    53,   128,    56,   135,
     103,    91,   136,   130,    -1,    -1,    -1,   131,    -1,   108,
     138
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,    55,    51,     0,    54,    42,     4,
      51,    56,    44,    57,     5,    51,    43,     6,    57,    11,
      58,    56,    47,    10,     7,    50,    42,     8,    48,    56,
      13,    17,    18,    21,    22,    23,    24,    25,    51,    60,
      62,    63,    64,    67,    69,    71,    73,    75,    77,    78,
      86,    47,    59,    28,    29,    30,    31,    45,    50,    51,
      79,    81,    83,    84,    86,    89,    92,    95,    96,    79,
      19,    86,    86,    86,    45,    89,    47,    87,     9,    42,
      49,    50,    12,    84,    96,    79,    89,    45,    14,    27,
      80,    26,    82,    36,    37,    38,    39,    40,    41,    85,
      31,    32,    90,    91,    33,    34,    35,    93,    94,    19,
      62,    49,    44,    74,    44,    76,    89,    89,    60,    61,
      89,    48,    46,    46,    89,    97,    62,    81,    83,    89,
      92,    95,    62,    42,    50,    86,    86,    48,    44,    98,
      46,    42,    80,    82,    90,    93,    42,    62,    70,    42,
      74,    76,    47,    88,    97,    16,    62,    65,    62,    68,
      42,    20,    79,    89,    62,    42,    15,    42,    20,    70,
      17,    42,    48,    42,    65,    68,    79,    86,    62,    66,
      49,    42,    89,    66,    19,    62,    42,    62,    72,    42,
      20,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    64,    65,    65,
      65,    66,    66,    67,    68,    68,    69,    70,    70,    71,
      72,    72,    73,    74,    74,    75,    76,    76,    77,    78,
      79,    80,    80,    81,    82,    82,    83,    83,    84,    84,
      84,    84,    85,    85,    85,    85,    85,    85,    86,    87,
      87,    88,    88,    89,    90,    90,    91,    91,    92,    93,
      93,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      97,    97,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     7,     0,     3,
       0,     6,     0,     3,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     7,     0,     3,
       4,     0,     3,     7,     0,     3,     8,     0,     3,    15,
       0,     3,     3,     0,     3,     3,     0,     3,     1,     2,
       2,     0,     3,     2,     0,     3,     1,     2,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     0,
       4,     0,     3,     2,     0,     3,     1,     1,     2,     0,
       3,     1,     1,     1,     1,     2,     4,     1,     1,     3,
       0,     2,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 37 "minil.y" /* yacc.c:1646  */
    {printf("program_start -> functions\n");}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 39 "minil.y" /* yacc.c:1646  */
    {printf("functions -> EPSILON\n");}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 40 "minil.y" /* yacc.c:1646  */
    {printf("functions -> function functions\n");}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "minil.y" /* yacc.c:1646  */
    {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declare_loop END_PARAMS BEGIN_LOCALS declare_loop END_LOCALS BEGIN_BODY stmt_loop END_BODY\n");}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "minil.y" /* yacc.c:1646  */
    {printf("declare_loop -> EPSILON\n");}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "minil.y" /* yacc.c:1646  */
    {printf("declare_loop -> IDENT ident_loop COLON dclr_choice INTEGER SEMICOLON declare_loop\n");}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "minil.y" /* yacc.c:1646  */
    {printf("ident_loop -> EPSILON\n");}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "minil.y" /* yacc.c:1646  */
    {printf("ident_loop->IDENT COMMA ident_loop\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "minil.y" /* yacc.c:1646  */
    {printf("dclr_choice -> EPSILON\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "minil.y" /* yacc.c:1646  */
    {printf("dclr_choice -> AARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET dclr_choice2 OF\n");}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "minil.y" /* yacc.c:1646  */
    {printf("dclr_choice2 -> EPSILON\n");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 58 "minil.y" /* yacc.c:1646  */
    {printf("dclr_choice2 -> L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET\n");}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "minil.y" /* yacc.c:1646  */
    {printf("stmt_loop -> stmt_options SEMICOLON choose_to_stop\n");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "minil.y" /* yacc.c:1646  */
    {printf("choose_tostop -> EPSILON\n");}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "minil.y" /* yacc.c:1646  */
    {printf("choose_tostop -> stmt_loop\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s1\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s2\n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s3\n");}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 72 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s4\n");}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 73 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s5\n");}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 74 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s6\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s7\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s8\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 77 "minil.y" /* yacc.c:1646  */
    {printf("stmt_options -> s9\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "minil.y" /* yacc.c:1646  */
    {printf("s1 -> var ASSIGN expression\n");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 81 "minil.y" /* yacc.c:1646  */
    {printf("s2 -> IF bool_expr THEN stmt_options SEMICOLON s2_choice ENDIF\n");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 82 "minil.y" /* yacc.c:1646  */
    {printf("s2_choice -> EPSILON\n");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 83 "minil.y" /* yacc.c:1646  */
    {printf("s2_choice -> stmt_options SEMICOLON\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 84 "minil.y" /* yacc.c:1646  */
    {printf("s2_choice -> ELSE stmt_options SEMICOLON s2_choice2\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 85 "minil.y" /* yacc.c:1646  */
    {printf("s2_choice2 -> EPSILON\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 86 "minil.y" /* yacc.c:1646  */
    {printf("s2_choice2 -> stmt_options SEMICOLON s2_choice2\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 88 "minil.y" /* yacc.c:1646  */
    {printf("s3 -> WHILE bool_expr BEGINLOOP stmt_options SEMICOLON s3_choice ENDLOOP\n");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 89 "minil.y" /* yacc.c:1646  */
    {printf("s3_choice -> EPSILON\n");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 90 "minil.y" /* yacc.c:1646  */
    {printf("s3_choice -> stmt_options SEMICOLON s3_choice\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 92 "minil.y" /* yacc.c:1646  */
    {printf("s4 -> DO BEGINLOOP stmt_options SEMICOLON s4_choice ENDLOOP WHILE bool_expr\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 93 "minil.y" /* yacc.c:1646  */
    {printf("s4_choice -> EPSILON\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 94 "minil.y" /* yacc.c:1646  */
    {printf("s4_choice -> stmt_options SEMICOLON s4_choice\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 96 "minil.y" /* yacc.c:1646  */
    {printf("s5 -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP stmt_options SEMICOLON s5_choice ENDLOOP\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 97 "minil.y" /* yacc.c:1646  */
    {printf("s5_choice -> EPSILON\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 98 "minil.y" /* yacc.c:1646  */
    {printf("s5_choice -> stmt_options SEMICOLON s5_choice\n");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 100 "minil.y" /* yacc.c:1646  */
    {printf("s6 -> READ var s6_choice\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 101 "minil.y" /* yacc.c:1646  */
    {printf("s6_choice -> EPSILON\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 102 "minil.y" /* yacc.c:1646  */
    {printf("s6_choice -> COMMA var s6_choice\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 104 "minil.y" /* yacc.c:1646  */
    {printf("s6 -> WRITE var s7_choice\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 105 "minil.y" /* yacc.c:1646  */
    {printf("s7_choice -> EPSILON\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 106 "minil.y" /* yacc.c:1646  */
    {printf("s7_choice -> COMMA var s7_choice\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 108 "minil.y" /* yacc.c:1646  */
    {printf("s8 -> CONTINUE\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 110 "minil.y" /* yacc.c:1646  */
    {printf("s9 -> RETURN expression\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 112 "minil.y" /* yacc.c:1646  */
    {printf("bool_expr -> relation_and_expr bool_choice\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 113 "minil.y" /* yacc.c:1646  */
    {printf("bool_choice -> EPSILON\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 114 "minil.y" /* yacc.c:1646  */
    {printf("bool_choice -> OR relation_and_expr bool_choicen");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 116 "minil.y" /* yacc.c:1646  */
    {printf("relation_and_expr -> relation_expr relandexpr_choice\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 117 "minil.y" /* yacc.c:1646  */
    {printf("relandexpr_choice -> EPSILON\n");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 118 "minil.y" /* yacc.c:1646  */
    {printf("relandexpr_choice -> AND relation_expr relandexpr_choice\n");}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 121 "minil.y" /* yacc.c:1646  */
    {printf("relation_expr -> rel_choice\n");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 122 "minil.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT rel_choice\n");}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 123 "minil.y" /* yacc.c:1646  */
    {printf("rel_choice -> expression comp expression\n");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 124 "minil.y" /* yacc.c:1646  */
    {printf("rel_choice -> TRUE \n");}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 125 "minil.y" /* yacc.c:1646  */
    {printf("rel_choice -> FALSE\n");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 126 "minil.y" /* yacc.c:1646  */
    {printf("rel_choice -> L_PAREN bool_expr R_PAREN\n");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 128 "minil.y" /* yacc.c:1646  */
    {printf("comp -> EQ\n");}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 129 "minil.y" /* yacc.c:1646  */
    {printf("comp -> NEQ\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 130 "minil.y" /* yacc.c:1646  */
    {printf("comp -> LT\n");}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 131 "minil.y" /* yacc.c:1646  */
    {printf("comp -> GT\n");}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 132 "minil.y" /* yacc.c:1646  */
    {printf("comp -> LTE\n");}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 133 "minil.y" /* yacc.c:1646  */
    {printf("comp -> GTE\n");}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 136 "minil.y" /* yacc.c:1646  */
    {printf("var -> IDENT var_choice\n");}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 138 "minil.y" /* yacc.c:1646  */
    {printf("var_choice -> EPSILON\n");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 139 "minil.y" /* yacc.c:1646  */
    {printf("var_choice -> IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_choice2\n");}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 141 "minil.y" /* yacc.c:1646  */
    {printf("var_choice2 -> EPSILON\n");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 142 "minil.y" /* yacc.c:1646  */
    {printf("var_choice2 -> IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_choice2\n");}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 146 "minil.y" /* yacc.c:1646  */
    {printf("expression -> multiplicative_expr expr_choice\n");}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 147 "minil.y" /* yacc.c:1646  */
    {printf("expr_choice -> EPSILON\n");}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 148 "minil.y" /* yacc.c:1646  */
    {printf("expr_choice -> expr_choice2 multiplicative_expression expr_choice\n");}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 149 "minil.y" /* yacc.c:1646  */
    {printf("expr_choice2 -> ADD\n");}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 150 "minil.y" /* yacc.c:1646  */
    {printf("expr_choice2 -> SUB\n");}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 153 "minil.y" /* yacc.c:1646  */
    {printf("multiplicative_expression -> term mult_choice\n");}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 154 "minil.y" /* yacc.c:1646  */
    {printf("mult_choice -> EPSILON\n");}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 155 "minil.y" /* yacc.c:1646  */
    {printf("mult_choice -> mult_choice2 term mult_choice\n");}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 156 "minil.y" /* yacc.c:1646  */
    {printf("mult_choice2 -> MOD\n");}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 157 "minil.y" /* yacc.c:1646  */
    {printf("mult_choice2 -> DIV\n");}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 158 "minil.y" /* yacc.c:1646  */
    {printf("mult_choice2 -> MULT\n");}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 160 "minil.y" /* yacc.c:1646  */
    {printf("term -> term_choice\n");}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 161 "minil.y" /* yacc.c:1646  */
    {printf("term -> SUB term_choice\n");}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 162 "minil.y" /* yacc.c:1646  */
    {printf("term -> IDENT L_PAREN term_choice2 R_PAREN\n");}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 163 "minil.y" /* yacc.c:1646  */
    {printf("term_choice -> var\n");}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 164 "minil.y" /* yacc.c:1646  */
    {printf("term_choice -> NUMBER\n");}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 165 "minil.y" /* yacc.c:1646  */
    {printf("term_choice -> L_PAREN expression R_PAREN\n");}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 167 "minil.y" /* yacc.c:1646  */
    {printf("term_choice2 -> EPSILON\n");}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 168 "minil.y" /* yacc.c:1646  */
    {printf("term_choice2 -> expression term_comma\n");}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 169 "minil.y" /* yacc.c:1646  */
    {printf("term_comma -> EPSILON\n");}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 170 "minil.y" /* yacc.c:1646  */
    {printf("term_comma -> COMMA term_choice2\n");}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1961 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 174 "minil.y" /* yacc.c:1906  */


/*user code like main file and main functions*/
int main(int argc, char ** argv)
{
   if(argc >= 2)
   {
      yyin = fopen(argv[1], "r");
      if(yyin == NULL)
      {
         yyin = stdin;
      }
   }
   else
   {
      yyin = stdin;
   }
   
   yyparse();
}

void yyerror(const char *msg){

	printf("Error: Line %d, position %d: %s\n", currLine,currPos,msg);
}

