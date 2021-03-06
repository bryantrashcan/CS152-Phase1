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
#line 1 "mini_l.y" /* yacc.c:339  */
 
#include "structs.h" 

using namespace std;
 
int yyerror(const char* nameStr);
int yylex(void);



stringstream *all_code; /* intermediated code to be put in file */

string makeIntCode(string *dst, string op, string *val1, string *val2);
/* generating intermediate code*/

string conv2String(char* nameStr);
string conv2String(int nameStr);

string *create_temp();
string *create_label();
int temp1 = 0;
int temp2 = 0;

string go_to(string *nameStr);

string labdclr_label(string *nameStr); /* label declare and variable temp declare*/
string vardclr_temp(string *nameStr);

void expression_code( Terminal &nterm,  Terminal t2, Terminal t3, string op);

bool pass = true;
bool noMainErr = false;

map<string,Var> arr_vars;
stack<Loop> loop_stack;

void add_map(string mapName, Var vartemp);
bool bool_map(string mapName);
void bool_map_dec(string mapName);




#line 110 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    READ = 277,
    WRITE = 278,
    RETURN = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    TRUE = 283,
    FALSE = 284,
    SUB = 285,
    ADD = 286,
    MULT = 287,
    DIV = 288,
    MOD = 289,
    EQ = 290,
    NEQ = 291,
    LT = 292,
    GT = 293,
    LTE = 294,
    GTE = 295,
    SEMICOLON = 296,
    COLON = 297,
    COMMA = 298,
    L_PAREN = 299,
    R_PAREN = 300,
    L_SQUARE_BRACKET = 301,
    R_SQUARE_BRACKET = 302,
    ASSIGN = 303,
    NUMBER = 304,
    IDENT = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "mini_l.y" /* yacc.c:355  */

    int		int_val;
    char 	str_val[256];

    struct{
        stringstream *term_code;
    }NonTerminal;

    struct Terminal Terminal;

#line 212 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,   100,   109,   114,   136,   147,   155,   161,
     205,   240,   248,   254,   262,   266,   271,   275,   279,   283,
     287,   291,   295,   299,   303,   325,   341,   345,   350,   361,
     373,   382,   393,   403,   407,   418,   428,   432,   443,   448,
     464,   470,   477,   491,   495,   500,   504,   511,   518,   523,
     528,   533,   538,   543,   548,   553,   558,   565,   597,   603,
     611,   627,   632,   634,   640,   656,   660,   663,   666,   672,
     678,   682,   688,   693,   698,   704,   713,   718,   722,   725
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
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "RETURN", "AND", "OR", "NOT",
  "TRUE", "FALSE", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT",
  "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "NUMBER", "IDENT",
  "$accept", "program_start", "functions", "function", "ident_term",
  "declare_loop", "ident_loop", "ident_loop2", "ident_loop_choice",
  "stmt_loop", "stmt_options", "s1", "s2", "s2_choice", "s3", "beg_loop",
  "s4", "s6", "s6_choice", "s7", "s7_choice", "s8", "s9", "bool_exp",
  "bool_choice", "relation_and_expr", "relandexpr_choice", "relation_expr",
  "rel_choice", "comp", "var", "var_choice", "expression", "expr_choice",
  "multiplicative_expression", "mult_choice", "term", "term_choice",
  "term_paren", "term_choice2", "term_comma", YY_NULLPTR
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
     305
};
# endif

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       0,   -41,    36,   -93,     0,   -93,     1,   -93,   -93,    51,
       7,    21,    54,    28,    65,    15,   -93,    69,     7,    32,
      79,    21,     7,   -93,    42,   -93,   -93,    85,    46,    86,
      83,     8,   -93,    17,    17,    78,   -93,    55,    55,   -26,
      61,    99,    68,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,    62,    24,   -93,   -93,   -38,    17,   -93,    -6,    97,
      87,    89,   -93,   -93,    64,    -3,   -17,   -93,   -93,    78,
     -93,     8,    72,    73,   -26,   -93,   -26,   -93,   -93,     8,
     -26,   -93,   -93,    74,    45,   -26,     8,    17,   -93,    17,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -26,   -26,   -26,
     -93,   -26,   -26,   -26,   -93,    98,   100,    55,   -93,    55,
     -93,    76,    71,   -93,   -93,   -93,   -93,    80,    77,   108,
      87,    89,   -93,    -3,    -3,   -17,   -17,   -17,     8,   109,
      72,    73,   -93,   -26,   -93,   -93,     8,   110,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   107,    17,   -93,   -93,   -93,
     -93,   -93,   -93,   -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     2,     4,     6,     0,     1,     3,     0,
       8,     0,     0,     0,    13,     0,     9,     0,     8,     0,
       0,     0,     8,     7,     0,    11,    10,     0,     0,     0,
       0,    15,    12,     0,     0,     0,    37,     0,     0,     0,
      59,     0,     0,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    48,    49,     0,     0,    73,    59,     0,
      41,    44,    45,    72,     0,    63,    68,    70,    71,     0,
      29,    15,    33,    36,     0,    38,     0,    57,     5,    15,
       0,    46,    69,     0,     0,    77,    15,     0,    39,     0,
      42,    51,    52,    53,    54,    55,    56,     0,     0,     0,
      60,     0,     0,     0,    64,     0,     0,     0,    31,     0,
      34,     0,     0,    14,    24,    50,    74,    79,     0,    26,
      41,    44,    47,    63,    63,    68,    68,    68,    15,     0,
      33,    36,    58,    77,    76,    75,    15,     0,    40,    43,
      62,    61,    65,    66,    67,     0,     0,    32,    35,    78,
      27,    25,    28,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,   124,   -93,   -93,    -8,   -93,   111,   -93,   -66,
     -93,   -93,   -93,   -93,   -93,    60,   -93,   -93,     3,   -93,
      -1,   -93,   -93,   -34,    11,    47,    14,    48,    84,   -93,
     -30,   -93,   -37,   -73,   -27,   -92,   -15,    88,   -93,     5,
     -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     6,    12,    13,    16,    20,    41,
      42,    43,    44,   137,    45,    71,    46,    47,   108,    48,
     110,    49,    50,    59,    88,    60,    90,    61,    62,    97,
      63,    77,    64,   100,    65,   104,    66,    67,    68,   118,
     134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,    51,    75,     1,    55,   106,    74,    72,    73,     5,
      23,    57,    40,   113,    27,   101,   102,   103,    74,    84,
     119,    33,    83,    57,    58,    34,    35,    98,    99,    36,
      37,    38,    39,   142,   143,   144,     7,   111,    85,   112,
      76,    51,     9,   114,    52,    53,    54,    55,   117,    51,
     140,   141,    53,    54,    55,    10,    51,    11,    40,    17,
     122,    56,   145,    14,    15,    21,    57,    58,    56,    18,
     150,   123,   124,    57,    58,    22,    19,   130,    24,   131,
      91,    92,    93,    94,    95,    96,   125,   126,   127,    25,
     116,    28,    29,    30,    31,    32,   117,    70,    51,    91,
      92,    93,    94,    95,    96,    40,    51,    76,    78,    79,
      80,    86,   153,    87,    89,   107,   109,   128,   132,   115,
     129,   116,   135,   133,   136,   151,   146,   152,     8,   105,
     148,   138,    26,   147,   120,   139,    81,   121,   149,     0,
       0,     0,     0,    82
};

static const yytype_int16 yycheck[] =
{
      34,    31,    39,     3,    30,    71,    44,    37,    38,    50,
      18,    49,    50,    79,    22,    32,    33,    34,    44,    56,
      86,    13,    56,    49,    50,    17,    18,    30,    31,    21,
      22,    23,    24,   125,   126,   127,     0,    74,    44,    76,
      46,    71,    41,    80,    27,    28,    29,    30,    85,    79,
     123,   124,    28,    29,    30,     4,    86,    50,    50,     5,
      97,    44,   128,    42,    43,    50,    49,    50,    44,    41,
     136,    98,    99,    49,    50,     6,    11,   107,    46,   109,
      35,    36,    37,    38,    39,    40,   101,   102,   103,    10,
      45,    49,     7,    47,     8,    12,   133,    19,   128,    35,
      36,    37,    38,    39,    40,    50,   136,    46,     9,    41,
      48,    14,   146,    26,    25,    43,    43,    19,    47,    45,
      20,    45,    45,    43,    16,    15,    17,    20,     4,    69,
     131,   120,    21,   130,    87,   121,    52,    89,   133,    -1,
      -1,    -1,    -1,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    53,    54,    50,    55,     0,    53,    41,
       4,    50,    56,    57,    42,    43,    58,     5,    41,    11,
      59,    50,     6,    56,    46,    10,    58,    56,    49,     7,
      47,     8,    12,    13,    17,    18,    21,    22,    23,    24,
      50,    60,    61,    62,    63,    65,    67,    68,    70,    72,
      73,    81,    27,    28,    29,    30,    44,    49,    50,    74,
      76,    78,    79,    81,    83,    85,    87,    88,    89,    74,
      19,    66,    81,    81,    44,    83,    46,    82,     9,    41,
      48,    79,    88,    74,    83,    44,    14,    26,    75,    25,
      77,    35,    36,    37,    38,    39,    40,    80,    30,    31,
      84,    32,    33,    34,    86,    66,    60,    43,    69,    43,
      71,    83,    83,    60,    83,    45,    45,    83,    90,    60,
      76,    78,    83,    85,    85,    87,    87,    87,    19,    20,
      81,    81,    47,    43,    91,    45,    16,    64,    75,    77,
      84,    84,    86,    86,    86,    60,    17,    69,    71,    90,
      60,    15,    20,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    55,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    63,    64,    64,    65,    66,
      67,    68,    69,    69,    70,    71,    71,    72,    73,    74,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    81,    82,    82,
      83,    84,    84,    84,    85,    86,    86,    86,    86,    87,
      87,    87,    88,    88,    88,    89,    90,    90,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,    12,     1,     3,     0,     2,
       3,     3,     5,     0,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     0,     2,     6,     1,
       6,     3,     3,     0,     3,     3,     0,     1,     2,     2,
       3,     0,     2,     3,     0,     1,     2,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     3,     0,
       2,     3,     3,     0,     2,     3,     3,     3,     0,     2,
       1,     1,     1,     1,     3,     4,     2,     0,     2,     0
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
#line 90 "mini_l.y" /* yacc.c:1646  */
    {
	(yyval.NonTerminal).term_code = (yyvsp[0].NonTerminal).term_code;
	if(!noMainErr){
		yyerror("Error: main function is undeclared.");
	}
	
}
#line 1425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 101 "mini_l.y" /* yacc.c:1646  */
    {
	
	(yyval.NonTerminal).term_code = (yyvsp[-1].Terminal).term_code;
	*((yyval.NonTerminal).term_code) << (yyvsp[0].NonTerminal).term_code->str();
	
        all_code = (yyval.NonTerminal).term_code;
}
#line 1437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 109 "mini_l.y" /* yacc.c:1646  */
    { // function functions | epsilon
	(yyval.NonTerminal).term_code = new stringstream(); // empty
}
#line 1445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 114 "mini_l.y" /* yacc.c:1646  */
    {
         
                (yyval.Terminal).term_code = new stringstream(); 
                string tempstr = *(yyvsp[-10].Terminal).term_place;
                if(tempstr.compare("main") == false){ // false in this case means tempstr is main, so set true
                    noMainErr = true;
                }
                *((yyval.Terminal).term_code)  << "func " << tempstr << "\n" << (yyvsp[-7].Terminal).term_code->str() << (yyvsp[-4].Terminal).term_code->str();
                for(int i = 0; i < (yyvsp[-7].Terminal).vars->size(); ++i){
                    if((*(yyvsp[-7].Terminal).vars)[i].var_type == INT_ARR){
                        yyerror("Error: cannot pass arrays to function.");
                    }
                    else if((*(yyvsp[-7].Terminal).vars)[i].var_type == INT){
                        *((yyval.Terminal).term_code) << "= " << *((*(yyvsp[-7].Terminal).vars)[i].var_place) << ", " << "$"<< conv2String(i) << "\n";
                    }else{
                        yyerror("Error: invalid type");
                    }
                }
                 *((yyval.Terminal).term_code) << (yyvsp[-1].Terminal).term_code->str();
                *((yyval.Terminal).term_code) << "endfunc\n";
            }
#line 1471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 136 "mini_l.y" /* yacc.c:1646  */
    {
            string tempstr = (yyvsp[0].str_val);
            Var myf = Var();
            myf.var_type = FUNC;
            if(!bool_map(tempstr)){
                add_map(tempstr,myf); 
            }
            (yyval.Terminal).term_place = new string();
            *(yyval.Terminal).term_place = tempstr;
        }
#line 1486 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 147 "mini_l.y" /* yacc.c:1646  */
    {
                (yyval.Terminal).term_code = (yyvsp[-2].Terminal).term_code;
                (yyval.Terminal).vars = (yyvsp[-2].Terminal).vars;
                for( int i = 0; i < (yyvsp[0].Terminal).vars->size(); ++i){
                    (yyval.Terminal).vars->push_back((*(yyvsp[0].Terminal).vars)[i]);
                }
                *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                }
#line 1499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 155 "mini_l.y" /* yacc.c:1646  */
    {
                (yyval.Terminal).term_code = new stringstream();
                (yyval.Terminal).vars = new vector<Var>();
              }
#line 1508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 161 "mini_l.y" /* yacc.c:1646  */
    {

                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_type = (yyvsp[0].Terminal).term_type;
                    (yyval.Terminal).term_length = (yyvsp[0].Terminal).term_length;

                    (yyval.Terminal).vars = (yyvsp[0].Terminal).vars;
                    Var vartemp = Var();
                    vartemp.var_type = (yyvsp[0].Terminal).term_type;
                    vartemp.var_length = (yyvsp[0].Terminal).term_length;
                    vartemp.var_place = new string();
                    *vartemp.var_place = (yyvsp[-1].str_val);
                    (yyval.Terminal).vars->push_back(vartemp);
                    if((yyvsp[0].Terminal).term_type == INT_ARR){
                        if((yyvsp[0].Terminal).term_length <= 0){
                            yyerror("Error: array size is <= 0.");
                        }
                        *((yyval.Terminal).term_code) << ".[] " << (yyvsp[-1].str_val) << ", " << (yyvsp[0].Terminal).term_length << "\n";
                        string nameStr = (yyvsp[-1].str_val);
                        if(!bool_map(nameStr)){
                            add_map(nameStr,vartemp);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + nameStr + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }

                    else if((yyvsp[0].Terminal).term_type == INT){
                        *((yyval.Terminal).term_code) << ". " << (yyvsp[-1].str_val) << "\n";
                        string nameStr = (yyvsp[-1].str_val);
                        if(!bool_map(nameStr)){
                            add_map(nameStr,vartemp);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + nameStr + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }else{
                            yyerror("Error: not a valid type.");
                    }

                }
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 205 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_type = (yyvsp[0].Terminal).term_type;
                    (yyval.Terminal).term_length = (yyvsp[0].Terminal).term_length;
                    (yyval.Terminal).vars = (yyvsp[0].Terminal).vars;
                    Var vartemp = Var();
                    vartemp.var_type = (yyvsp[0].Terminal).term_type;
                    vartemp.var_length = (yyvsp[0].Terminal).term_length;
                    vartemp.var_place = new string();
                    *vartemp.var_place = (yyvsp[-1].str_val);
                    (yyval.Terminal).vars->push_back(vartemp);
                    if((yyvsp[0].Terminal).term_type == INT_ARR){
                        *((yyval.Terminal).term_code) << ".[] " << (yyvsp[-1].str_val) << ", " << (yyvsp[0].Terminal).term_length << "\n";
                        string nameStr = (yyvsp[-1].str_val);
                        if(!bool_map(nameStr)){
                            add_map(nameStr,vartemp);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + nameStr + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }
                    else if((yyvsp[0].Terminal).term_type == INT){
                        *((yyval.Terminal).term_code) << ". " << (yyvsp[-1].str_val) << "\n";
                        string nameStr = (yyvsp[-1].str_val);
                        if(!bool_map(nameStr)){
                            add_map(nameStr,vartemp);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + nameStr + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }else{
                    }
                }
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 240 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    (yyval.Terminal).term_type = (yyvsp[-1].Terminal).term_type;
                    (yyval.Terminal).term_length = (yyvsp[-1].Terminal).term_length;
                    (yyval.Terminal).vars = (yyvsp[-1].Terminal).vars;
                }
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 248 "mini_l.y" /* yacc.c:1646  */
    {
	(yyval.Terminal).term_code = new stringstream();
	(yyval.Terminal).vars = new vector<Var>();
	(yyval.Terminal).term_type = INT_ARR;
	(yyval.Terminal).term_length = (yyvsp[-2].int_val);
                }
#line 1618 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 254 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).vars = new vector<Var>();
                    (yyval.Terminal).term_type = INT;
                    (yyval.Terminal).term_length = 0;
                  }
#line 1629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 262 "mini_l.y" /* yacc.c:1646  */
    {
                (yyval.Terminal).term_code = (yyvsp[-2].Terminal).term_code;
                *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
              }
#line 1638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 266 "mini_l.y" /* yacc.c:1646  */
    {(yyval.Terminal).term_code = new stringstream();
		(yyval.Terminal).vars = new vector<Var>();}
#line 1645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 271 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 275 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 279 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 283 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 287 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 291 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 295 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 299 "mini_l.y" /* yacc.c:1646  */
    {
		(yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
	}
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 303 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-2].Terminal).term_code;
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                    if((yyvsp[-2].Terminal).term_type == INT && (yyvsp[0].Terminal).term_type == INT){
                       *((yyval.Terminal).term_code) << "= " << *(yyvsp[-2].Terminal).term_place << ", " << *(yyvsp[0].Terminal).term_place << "\n";
                    }
                    else if((yyvsp[-2].Terminal).term_type == INT && (yyvsp[0].Terminal).term_type == INT_ARR){
                        *((yyval.Terminal).term_code) << makeIntCode((yyvsp[-2].Terminal).term_place, "=[]", (yyvsp[0].Terminal).term_place, (yyvsp[0].Terminal).term_index);
                    }
                    else if((yyvsp[-2].Terminal).term_type == INT_ARR && (yyvsp[0].Terminal).term_type == INT && (yyvsp[-2].Terminal).term_value != NULL){
                        *((yyval.Terminal).term_code) << makeIntCode((yyvsp[-2].Terminal).term_value, "[]=", (yyvsp[-2].Terminal).term_index, (yyvsp[0].Terminal).term_place);
                    }
                    else if((yyvsp[-2].Terminal).term_type == INT_ARR && (yyvsp[0].Terminal).term_type == INT_ARR){
                        string *tempstr = create_temp();
                        *((yyval.Terminal).term_code) << vardclr_temp(tempstr) << makeIntCode(tempstr, "=[]", (yyvsp[0].Terminal).term_place, (yyvsp[0].Terminal).term_index);
                        *((yyval.Terminal).term_code) << makeIntCode((yyvsp[-2].Terminal).term_value, "[]=", (yyvsp[-2].Terminal).term_index, tempstr);
                    }
                    else{
                        yyerror("Error: expression cannot be of NULL type.");
                    }
                }
#line 1735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 325 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).begin_term = create_label();
                    (yyval.Terminal).end_term = create_label();
                    *((yyval.Terminal).term_code) << (yyvsp[-4].Terminal).term_code->str() << "?:= " << *(yyval.Terminal).begin_term << ", " <<  *(yyvsp[-4].Terminal).term_place << "\n";
                    if((yyvsp[-1].Terminal).begin_term != NULL){                       
                        *((yyval.Terminal).term_code) << go_to((yyvsp[-1].Terminal).begin_term); 
                        *((yyval.Terminal).term_code) << labdclr_label((yyval.Terminal).begin_term)  << (yyvsp[-2].Terminal).term_code->str() << go_to((yyval.Terminal).end_term);
                        *((yyval.Terminal).term_code) << labdclr_label((yyvsp[-1].Terminal).begin_term) << (yyvsp[-1].Terminal).term_code->str();
                    }
                    else{
                        *((yyval.Terminal).term_code) << go_to((yyval.Terminal).end_term)<< labdclr_label((yyval.Terminal).begin_term)  << (yyvsp[-2].Terminal).term_code->str();
                    }
                    *((yyval.Terminal).term_code) << labdclr_label((yyval.Terminal).end_term);
                }
#line 1755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 341 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).begin_term = NULL;
                }
#line 1764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 345 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).begin_term = create_label();
                }
#line 1773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 350 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).begin_term = (yyvsp[-3].Terminal).begin_term;
                    (yyval.Terminal).term_parent = (yyvsp[-3].Terminal).term_parent;
                    (yyval.Terminal).end_term = (yyvsp[-3].Terminal).end_term;
                    *((yyval.Terminal).term_code) << labdclr_label((yyval.Terminal).term_parent) << (yyvsp[-4].Terminal).term_code->str() << "?:= " << *(yyval.Terminal).begin_term << ", " << *(yyvsp[-4].Terminal).term_place << "\n" 
                    << go_to((yyval.Terminal).end_term) << labdclr_label((yyval.Terminal).begin_term) << (yyvsp[-1].Terminal).term_code->str() << go_to((yyval.Terminal).term_parent) << labdclr_label((yyval.Terminal).end_term);
                    loop_stack.pop();

                }
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 361 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).begin_term = create_label();
                    (yyval.Terminal).term_parent = create_label();
                    (yyval.Terminal).end_term = create_label();
                    Loop l = Loop();
                    l.loop_parent = (yyval.Terminal).term_parent;
                    l.begin_loop = (yyval.Terminal).begin_term;
                    l.end_loop = (yyval.Terminal).end_term;
                    loop_stack.push(l);
                }
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 373 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).begin_term = (yyvsp[-4].Terminal).begin_term;
                    (yyval.Terminal).term_parent = (yyvsp[-4].Terminal).term_parent;
                    (yyval.Terminal).end_term = (yyvsp[-4].Terminal).end_term;
                    *((yyval.Terminal).term_code) << labdclr_label((yyval.Terminal).begin_term) << (yyvsp[-3].Terminal).term_code->str() << labdclr_label((yyval.Terminal).term_parent) << (yyvsp[0].Terminal).term_code->str() << "?:= " << *(yyval.Terminal).begin_term << ", " << *(yyvsp[0].Terminal).term_place << "\n" << labdclr_label((yyval.Terminal).end_term);
                    loop_stack.pop();
                }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 382 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    if((yyvsp[-1].Terminal).term_type == INT){
                       *((yyval.Terminal).term_code) << ".< " << *(yyvsp[-1].Terminal).term_place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).term_code) << ".[]< " << *(yyvsp[-1].Terminal).term_place << ", " << (yyvsp[-1].Terminal).term_index << "\n"; 
                    }
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                }
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 393 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    if((yyvsp[-1].Terminal).term_type == INT){
                       *((yyval.Terminal).term_code) << ".< " << *(yyvsp[-1].Terminal).term_place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).term_code) << ".[]< " << *(yyvsp[-1].Terminal).term_place << ", " << (yyvsp[-1].Terminal).term_index << "\n"; 
                    }
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                }
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 403 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                  }
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 407 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    if((yyvsp[-1].Terminal).term_type == INT){
                       *((yyval.Terminal).term_code) << ".> " << *(yyvsp[-1].Terminal).term_place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).term_code) << ".[]> " << *(yyvsp[-1].Terminal).term_value << ", " << *(yyvsp[-1].Terminal).term_index << "\n"; 
                    }
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                  }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 418 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    if((yyvsp[-1].Terminal).term_type == INT){
                       *((yyval.Terminal).term_code) << ".> " << *(yyvsp[-1].Terminal).term_place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).term_code) << ".[]> " << *(yyvsp[-1].Terminal).term_value << ", " << *(yyvsp[-1].Terminal).term_index << "\n"; 
                    }
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                  }
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 428 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                 }
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 432 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    if(loop_stack.size() <= 0){
                        yyerror("Error: continue statement cannot be used outside of a loop.");
                    }
                    else{
                        Loop l = loop_stack.top();
                        *((yyval.Terminal).term_code) << ":= " << *l.loop_parent << "\n";
                    }
                }
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 443 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_place = (yyvsp[0].Terminal).term_place;
                    *((yyval.Terminal).term_code) << "ret " << *(yyval.Terminal).term_place << "\n";
                }
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 448 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                    if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).term_place != NULL)
                    {                        
                        (yyval.Terminal).term_place = create_temp();
                       
                       *((yyval.Terminal).term_code) << vardclr_temp((yyval.Terminal).term_place) << makeIntCode((yyval.Terminal).term_place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).term_place, (yyvsp[0].Terminal).term_place);
                     
                    }
                    else{
                        (yyval.Terminal).term_place = (yyvsp[-1].Terminal).term_place;
                        (yyval.Terminal).op = (yyvsp[-1].Terminal).op;
                    }
                }
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 464 "mini_l.y" /* yacc.c:1646  */
    {
                 
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"||");


                }
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 470 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = NULL;
                 }
#line 1958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 477 "mini_l.y" /* yacc.c:1646  */
    {
	(yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
	*((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
	if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).term_place != NULL)
	{                        
		(yyval.Terminal).term_place = create_temp();
		*((yyval.Terminal).term_code) << vardclr_temp((yyval.Terminal).term_place) << makeIntCode((yyval.Terminal).term_place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).term_place, (yyvsp[0].Terminal).term_place);
 	}
	else{
		(yyval.Terminal).term_place = (yyvsp[-1].Terminal).term_place;
		(yyval.Terminal).op = (yyvsp[-1].Terminal).op;
	}
}
#line 1976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 491 "mini_l.y" /* yacc.c:1646  */
    {
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"&&");

                }
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 495 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = NULL;
                 }
#line 1994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 500 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_place = (yyvsp[0].Terminal).term_place; 
                }
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 504 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_place = create_temp();
                    *((yyval.Terminal).term_code) << vardclr_temp((yyval.Terminal).term_place) << makeIntCode((yyval.Terminal).term_place, "!", (yyvsp[0].Terminal).term_place, NULL);
                }
#line 2013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 511 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-2].Terminal).term_code;
                    *((yyval.Terminal).term_code) << (yyvsp[-1].Terminal).term_code->str();
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                    (yyval.Terminal).term_place = create_temp();
                    *((yyval.Terminal).term_code)<< vardclr_temp((yyval.Terminal).term_place) << makeIntCode((yyval.Terminal).term_place, *(yyvsp[-1].Terminal).op, (yyvsp[-2].Terminal).term_place, (yyvsp[0].Terminal).term_place);
                }
#line 2025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 518 "mini_l.y" /* yacc.c:1646  */
    {                    
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).term_place = new string();
                    *(yyval.Terminal).term_place = "1";
                    }
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 523 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).term_place = new string();
                    *(yyval.Terminal).term_place = "0";
                  }
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 528 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    (yyval.Terminal).term_place = (yyvsp[-1].Terminal).term_place;
                }
#line 2054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 533 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "==";
                  }
#line 2064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 538 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "!=";
                  }
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 543 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "<";
                  }
#line 2084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 548 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = ">";
                  }
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 553 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "<=";
                  }
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 558 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = ">=";
                  }
#line 2114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 565 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_type = (yyvsp[0].Terminal).term_type;
                    string tempstr = (yyvsp[-1].str_val);
                    bool_map_dec(tempstr);
                    if(bool_map(tempstr) && arr_vars[tempstr].var_type != (yyvsp[0].Terminal).term_type){
                        if((yyvsp[0].Terminal).term_type == INT_ARR){ /* type is int */
                            string output ="Error: used variable \"" + tempstr + "\" is not of type array.";
                            yyerror(output.c_str());
                        }
                        else if((yyvsp[0].Terminal).term_type == INT){ /* type is arr int */
                            string output ="Error: used array variable \"" + tempstr + "\" is missing a specified index.";
                            yyerror(output.c_str());
                        }
                    }

                    if((yyvsp[0].Terminal).term_index == NULL){
                        (yyval.Terminal).term_place = new string();
                        *(yyval.Terminal).term_place = (yyvsp[-1].str_val);
                    }
                    else{
                        (yyval.Terminal).term_index = (yyvsp[0].Terminal).term_index;
                        (yyval.Terminal).term_place = create_temp();
                        string* tempstr = new string();
                        *tempstr = (yyvsp[-1].str_val);
                        *((yyval.Terminal).term_code) << vardclr_temp((yyval.Terminal).term_place) << makeIntCode((yyval.Terminal).term_place, "=[]", tempstr,(yyvsp[0].Terminal).term_index);
                        (yyval.Terminal).term_value = new string();
                        *(yyval.Terminal).term_value = (yyvsp[-1].str_val);
                    }
                }
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 597 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    (yyval.Terminal).term_place = NULL;
                    (yyval.Terminal).term_index = (yyvsp[-1].Terminal).term_place;
                    (yyval.Terminal).term_type = INT_ARR;
                }
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 603 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).term_index = NULL;
                    (yyval.Terminal).term_place = NULL;
                    (yyval.Terminal).term_type = INT;
                 }
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 611 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                    if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).term_place != NULL)
                    {                        
                        (yyval.Terminal).term_place = create_temp();
                       *((yyval.Terminal).term_code)<< vardclr_temp((yyval.Terminal).term_place) << makeIntCode((yyval.Terminal).term_place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).term_place, (yyvsp[0].Terminal).term_place);
                    }
                    else{
                        (yyval.Terminal).term_place = (yyvsp[-1].Terminal).term_place;
                        (yyval.Terminal).op = (yyvsp[-1].Terminal).op;
                    }
                    (yyval.Terminal).term_type = INT;
                  }
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 627 "mini_l.y" /* yacc.c:1646  */
    {

                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"+");

                  }
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 632 "mini_l.y" /* yacc.c:1646  */
    {expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"-");
                  }
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 634 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = NULL;
                  }
#line 2216 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 640 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                    if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).term_place != NULL)
                    {                        
                        (yyval.Terminal).term_place = create_temp();
                       *((yyval.Terminal).term_code)<< vardclr_temp((yyval.Terminal).term_place)<< makeIntCode((yyval.Terminal).term_place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).term_place, (yyvsp[0].Terminal).term_place);
                    }
                    else{
                        (yyval.Terminal).term_place = (yyvsp[-1].Terminal).term_place;
                        (yyval.Terminal).op = (yyvsp[-1].Terminal).op;
                    }
                  }
#line 2234 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 656 "mini_l.y" /* yacc.c:1646  */
    {
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"*");

                  }
#line 2243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 660 "mini_l.y" /* yacc.c:1646  */
    {
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"/");
                  }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 663 "mini_l.y" /* yacc.c:1646  */
    {
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"%");
                  }
#line 2259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 666 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).op = NULL;
                 }
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 672 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_place = create_temp();
                    string tempstr = "-1";
                    *((yyval.Terminal).term_code)<< vardclr_temp((yyval.Terminal).term_place) << makeIntCode((yyval.Terminal).term_place, "*",(yyvsp[0].Terminal).term_place, &tempstr );
                  }
#line 2279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 678 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_place = (yyvsp[0].Terminal).term_place;
                  }
#line 2288 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 682 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_place = (yyvsp[0].Terminal).term_place;
                  }
#line 2297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 688 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                    (yyval.Terminal).term_place= (yyvsp[0].Terminal).term_place;
                    (yyval.Terminal).term_index = (yyvsp[0].Terminal).term_index;
                  }
#line 2307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 693 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                    (yyval.Terminal).term_place = new string();
                    *(yyval.Terminal).term_place = conv2String((yyvsp[0].int_val));
                  }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 698 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    (yyval.Terminal).term_place = (yyvsp[-1].Terminal).term_place;
                  }
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 704 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    (yyval.Terminal).term_place = create_temp();
                    *((yyval.Terminal).term_code) << vardclr_temp((yyval.Terminal).term_place)<< "call " << (yyvsp[-3].str_val) << ", " << *(yyval.Terminal).term_place << "\n";
                    string tempstr = (yyvsp[-3].str_val);
                    bool_map_dec(tempstr);
                }
#line 2338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 713 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[-1].Terminal).term_code;
                    *((yyval.Terminal).term_code) << (yyvsp[0].Terminal).term_code->str();
                    *((yyval.Terminal).term_code) << "param " << *(yyvsp[-1].Terminal).term_place << "\n";
                }
#line 2348 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 718 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream(); 
                  }
#line 2356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 722 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = (yyvsp[0].Terminal).term_code;
                }
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 725 "mini_l.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).term_code = new stringstream();
                  }
#line 2372 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2376 "parser.tab.c" /* yacc.c:1646  */
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
#line 731 "mini_l.y" /* yacc.c:1906  */



string conv2String(char* nameStr){
    ostringstream c;
    c << nameStr;
    return c.str();
}

string conv2String(int nameStr){
    ostringstream c;
    c << nameStr;
    return c.str();
}


void expression_code( Terminal &nterm, Terminal t2, Terminal t3, string op){
    nterm.term_code = t2.term_code;
    *(nterm.term_code) << t3.term_code->str();
    if(t3.op == NULL){
        nterm.term_place = t2.term_place;
        nterm.op = new string();
        *nterm.op = op;
    }
    else{
        nterm.term_place = create_temp();
        nterm.op = new string();
        *nterm.op = op;

        *(nterm.term_code) << vardclr_temp(nterm.term_place)<< makeIntCode(nterm.term_place , *t3.op, t2.term_place, t3.term_place);
    } 
}

string go_to(string *nameStr){
    return ":= "+ *nameStr + "\n"; 
}
string labdclr_label(string *nameStr){
    return ": " +*nameStr + "\n"; 
}

void add_map(string mapName, Var vartemp){
    if(arr_vars.find(mapName) == arr_vars.end()){
        arr_vars[mapName] = vartemp;
    }
    else{
        string tempstr = "Error: " + mapName + " already exists.";
        yyerror(tempstr.c_str());
    }
}
bool bool_map(string mapName){
    if(arr_vars.find(mapName) == arr_vars.end()){
        return false;
    }
    return true;
}
void bool_map_dec(string mapName){
    if(!bool_map(mapName)){
        string tempstr = "Error: No name of \"" + mapName + "\" in map.";
        yyerror(tempstr.c_str());
    }
}

string vardclr_temp(string *nameStr){
    return ". " +*nameStr + "\n"; 
}
string * create_temp(){
    string * t = new string();
    ostringstream conv;
    conv << temp1;
    *t = "__temp__"+ conv.str();
    temp1++;
    return t;
}
string * create_label(){
    string * t = new string();
    ostringstream conv;
    conv << temp2;
    *t = "__label__"+ conv.str();
    temp2++;
    return t;
}

string makeIntCode(string *dst, string op, string *src1, string *src2){
    if(op == "!"){
        return op + " " + *dst + ", " + *src1 + "\n";
    }
    else{
        return op + " " + *dst + ", " + *src1 + ", "+ *src2 +"\n";
    }
}



int yyerror(const char *nameStr)
{
    extern int line_cnt;
    pass = false;
    printf("Line %d: %nameStr\n",line_cnt,nameStr);
    return -1;
}


int main(int argc, char **argv) {
    FILE *filein;

    if ((argc > 1) && (filein = fopen(argv[1],"r")) == NULL){
        printf("syntax: %nameStr filename\n", argv[0]);
        return 1;
    }

    yyparse();

    if(pass){
        ofstream file;
        file.open("mil_code.mil");
        file << all_code->str();
        file.close();
    }

    return 0;
}
