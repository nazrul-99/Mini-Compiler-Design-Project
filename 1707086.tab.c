
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\1707086.y"

	#include<stdio.h>
	#include <math.h>
	#include<string.h>
	int cnt=1,cntt=1,cnt2=1,val,track=0;
	typedef struct entry {
    	char *str;
    	int n;
	}storage;
	storage store[1000],symbol[1000];
	void insert (storage *p, char *s, int n);
	int key_for_storage_table(char *key);
	int key_for_symbol_table(char *key);
	


/* Line 189 of yacc.c  */
#line 90 "1707086.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     VOIDMAIN = 263,
     FUNCTION = 264,
     INT = 265,
     FLOAT = 266,
     DOUBLE = 267,
     CHAR = 268,
     LB = 269,
     RB = 270,
     LAB = 271,
     RAB = 272,
     CM = 273,
     SM = 274,
     PLUS = 275,
     MINUS = 276,
     MULT = 277,
     DIV = 278,
     POW = 279,
     FACT = 280,
     ASSIGN = 281,
     FOR = 282,
     COL = 283,
     WHILE = 284,
     BREAK = 285,
     COLON = 286,
     DEFAULT = 287,
     CASE = 288,
     SWITCH = 289,
     inc = 290,
     dec = 291,
     not = 292,
     funct = 293,
     IFX = 294,
     ELIFX = 295,
     NOTEQUAL = 296,
     EQUAL = 297,
     LE = 298,
     GE = 299,
     GT = 300,
     LT = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 ".\\1707086.y"

        int num;
        char *varname;



/* Line 214 of yacc.c  */
#line 179 "1707086.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 191 "1707086.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  229

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    19,    20,    23,    25,    29,    31,
      33,    35,    39,    41,    43,    46,    51,    59,    68,    82,
     109,   136,   158,   170,   180,   190,   200,   210,   216,   218,
     221,   222,   225,   231,   236,   238,   240,   244,   248,   252,
     256,   259,   263,   267,   271,   275,   279,   283,   287,   291,
     295,   299,   301,   303,   307,   311,   315,   319,   322,   326,
     330,   334,   338,   342,   346,   350,   354,   358
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    48,     8,    14,    15,    16,    49,    17,
      -1,     9,    14,    49,    15,    16,    49,    17,    -1,    -1,
      49,    53,    -1,    50,    -1,    51,    52,    19,    -1,    10,
      -1,    11,    -1,    13,    -1,    52,    18,     4,    -1,     4,
      -1,    19,    -1,    58,    19,    -1,     4,    26,    58,    19,
      -1,    34,    14,    59,    15,    16,    54,    17,    -1,     5,
      14,    58,    15,    16,    58,    19,    17,    -1,     5,    14,
      58,    15,    16,    58,    19,    17,     7,    16,    58,    19,
      17,    -1,     5,    14,    58,    15,    16,     5,    14,    58,
      15,    16,    58,    19,    17,     7,    16,    58,    19,    17,
      58,    19,    17,     7,    16,    58,    19,    17,    -1,     5,
      14,    58,    15,    16,    58,    19,    17,     7,    16,     5,
      14,    58,    15,    16,    58,    19,    17,     7,    16,    58,
      19,    17,    58,    19,    17,    -1,     5,    14,    58,    15,
      16,    58,    19,    17,     6,    14,    58,    15,    16,    58,
      19,    17,     7,    16,    58,    19,    17,    -1,    27,    14,
       3,    18,     3,    18,     3,    15,    16,    49,    17,    -1,
      29,    14,    58,    46,    58,    15,    16,    49,    17,    -1,
      29,    14,    58,    45,    58,    15,    16,    49,    17,    -1,
      29,    14,    58,    44,    58,    15,    16,    49,    17,    -1,
      29,    14,    58,    43,    58,    15,    16,    49,    17,    -1,
       9,    14,    49,    15,    19,    -1,    55,    -1,    55,    57,
      -1,    -1,    55,    56,    -1,    33,     3,    28,    58,    19,
      -1,    32,    28,    58,    19,    -1,     3,    -1,     4,    -1,
      58,    20,    58,    -1,    58,    21,    58,    -1,    58,    22,
      58,    -1,    58,    23,    58,    -1,    58,    25,    -1,    58,
      46,    58,    -1,    58,    45,    58,    -1,    58,    43,    58,
      -1,    58,    44,    58,    -1,    58,    42,    58,    -1,    58,
      41,    58,    -1,    14,    58,    15,    -1,    35,    58,    35,
      -1,    36,    58,    36,    -1,    37,    58,    37,    -1,     3,
      -1,     4,    -1,    59,    20,    59,    -1,    59,    21,    59,
      -1,    59,    22,    59,    -1,    59,    23,    59,    -1,    59,
      25,    -1,    59,    46,    59,    -1,    59,    45,    59,    -1,
      59,    43,    59,    -1,    59,    44,    59,    -1,    59,    42,
      59,    -1,    59,    41,    59,    -1,    14,    59,    15,    -1,
      35,    59,    35,    -1,    36,    59,    36,    -1,    37,    59,
      37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    43,    46,    47,    48,    51,    54,    55,
      56,    59,    67,    77,    79,    81,    95,    97,   104,   111,
     123,   135,   145,   155,   167,   179,   191,   203,   209,   210,
     213,   214,   217,   224,   233,   235,   237,   239,   241,   243,
     254,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   293,   295,   297,   299,   301,   303,   314,   324,   326,
     328,   330,   332,   334,   336,   338,   340,   342
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELIF", "ELSE",
  "VOIDMAIN", "FUNCTION", "INT", "FLOAT", "DOUBLE", "CHAR", "LB", "RB",
  "LAB", "RAB", "CM", "SM", "PLUS", "MINUS", "MULT", "DIV", "POW", "FACT",
  "ASSIGN", "FOR", "COL", "WHILE", "BREAK", "COLON", "DEFAULT", "CASE",
  "SWITCH", "inc", "dec", "not", "funct", "IFX", "ELIFX", "NOTEQUAL",
  "EQUAL", "LE", "GE", "GT", "LT", "$accept", "program", "cstatement",
  "cdeclaration", "TYPE", "ID1", "statement", "CONTROL", "CONDITION",
  "EVENT", "STANDARD", "expression", "switch_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    50,    51,    51,
      51,    52,    52,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      55,    55,    56,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     7,     0,     2,     1,     3,     1,     1,
       1,     3,     1,     1,     2,     4,     7,     8,    13,    26,
      26,    21,    11,     9,     9,     9,     9,     5,     1,     2,
       0,     2,     5,     4,     1,     1,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     8,     9,    10,     0,
       6,     0,     0,    34,    35,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     5,     0,    12,     0,
       0,     0,     0,     4,    35,     0,     4,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     7,     4,     0,     0,
       0,    47,     0,     0,     0,    51,    52,     0,     0,     0,
       0,     0,    48,    49,    50,    36,    37,    38,    39,    46,
      45,    43,    44,    42,    41,    11,     0,    15,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     2,     0,    27,     0,    43,    44,    42,    41,
      64,    65,    66,    67,    30,    53,    54,    55,    56,    63,
      62,    60,    61,    59,    58,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     4,     4,     4,
       4,    16,     0,     0,    31,    29,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,    26,
      25,    24,    23,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,    22,    32,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    29,    26,   142,   143,   154,
     155,    27,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
       7,    17,     5,    13,   -59,    26,   -59,   -59,   -59,    52,
     -59,    38,    32,   -59,    28,    50,    54,    97,    64,   -59,
      56,    68,    81,    97,    97,    97,   -59,   510,   -59,   -16,
      86,    97,    97,    13,   -59,   359,    13,   104,    97,   141,
     719,   730,   757,   -59,    97,    97,    97,    97,   -59,    97,
      97,    97,    97,    97,    97,   106,   -59,    13,   517,   391,
      94,   -59,   134,    96,   834,   -59,   -59,   141,   141,   141,
     141,   400,   -59,   -59,   -59,    16,    16,    87,    87,    -3,
      -3,    -3,    -3,    -3,    -3,   -59,   183,   -59,   103,   101,
     -59,   119,    97,    97,    97,    97,   432,   770,   797,   807,
     108,   141,   141,   141,   141,   -59,   141,   141,   141,   141,
     141,   141,   -59,    55,   -59,   107,   186,   219,   254,   289,
     -59,   -59,   -59,   -59,   -59,    40,    40,   110,   110,   208,
     208,   208,   208,   208,   208,   112,   524,   137,   125,   126,
     131,   133,   135,    61,    97,   139,   147,    13,    13,    13,
      13,   -59,   122,   151,   -59,   -59,   441,    78,   148,   218,
     253,   288,   323,    97,   138,   149,   153,   157,    13,   -59,
     -59,   -59,   -59,   552,    97,    97,    97,    69,   358,   -59,
     559,   566,   473,   160,   594,   -59,   -59,   162,   164,    97,
     165,   177,    97,   482,   -59,   169,   601,   173,    97,   176,
      97,   608,   187,   636,   178,   180,   182,    97,    97,   196,
     643,   650,   197,   198,   199,    97,   207,   -59,   678,   209,
     221,    97,    97,   685,   692,   226,   229,   -59,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   -32,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -17,   -58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,    60,    55,    56,    62,     4,    40,    41,    42,    96,
      97,    98,    99,     5,    58,    59,     1,    44,    45,    46,
      47,    64,    48,     6,     7,    86,     8,    75,    76,    77,
      78,     3,    79,    80,    81,    82,    83,    84,    46,    47,
      12,    48,    28,   125,   126,   127,   128,    30,   129,   130,
     131,   132,   133,   134,    31,    13,    14,    15,    13,    34,
     135,    16,   103,   104,    32,   105,    17,    18,    33,    17,
      37,    19,    13,    34,   183,   116,   117,   118,   119,    20,
      36,    21,    38,    17,   166,   167,    22,    23,    24,    25,
      23,    24,    25,   152,   153,    39,   136,    13,    14,    15,
      13,    34,    57,    16,    23,    24,    25,    63,    17,    89,
      85,    17,    48,    19,    91,   159,   160,   161,   162,   113,
     114,    20,   115,    21,   124,   137,   144,   156,    22,    23,
      24,    25,    23,    24,    25,   105,   178,    13,    14,    15,
     146,   147,   148,    16,    65,    66,   173,   149,    17,   150,
     163,    90,   151,    19,   164,    67,   157,   180,   181,   182,
     184,    20,   158,    21,   168,   175,   174,   176,    22,    23,
      24,    25,   193,   177,   189,   196,    68,    69,    70,   191,
     192,   201,   194,   203,   195,   198,    13,    14,    15,   200,
     210,   211,    16,   202,   205,   207,   208,    17,   218,   209,
     112,   138,    19,   212,   223,   224,    44,    45,    46,    47,
      20,    48,    21,   215,   219,   216,   217,    22,    23,    24,
      25,    13,    14,    15,     0,   221,     0,    16,   101,   102,
     103,   104,    17,   105,   139,   169,     0,    19,   222,    44,
      45,    46,    47,   227,    48,    20,   228,    21,     0,     0,
       0,     0,    22,    23,    24,    25,    13,    14,    15,     0,
       0,     0,    16,     0,     0,     0,     0,    17,     0,   140,
     170,     0,    19,     0,    44,    45,    46,    47,     0,    48,
      20,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,    13,    14,    15,     0,     0,     0,    16,     0,     0,
       0,     0,    17,     0,   141,   171,     0,    19,     0,    44,
      45,    46,    47,     0,    48,    20,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,    13,    14,    15,     0,
       0,     0,    16,     0,     0,     0,     0,    17,     0,     0,
     172,     0,    19,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,    13,    14,    15,     0,     0,     0,    16,     0,     0,
       0,     0,    17,     0,    61,   185,     0,    19,     0,    44,
      45,    46,    47,     0,    48,    20,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    88,     0,     0,     0,
       0,    44,    45,    46,    47,   100,    48,     0,     0,     0,
     101,   102,   103,   104,     0,   105,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,    54,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   120,     0,     0,
       0,     0,   101,   102,   103,   104,   165,   105,     0,     0,
       0,    44,    45,    46,    47,     0,    48,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,     0,
       0,     0,    49,    50,    51,    52,    53,    54,   188,     0,
       0,     0,     0,    44,    45,    46,    47,   197,    48,     0,
       0,     0,    44,    45,    46,    47,     0,    48,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
       0,     0,     0,    49,    50,    51,    52,    53,    54,    43,
      44,    45,    46,    47,     0,    48,    87,    44,    45,    46,
      47,     0,    48,   145,    44,    45,    46,    47,     0,    48,
       0,    49,    50,    51,    52,    53,    54,     0,    49,    50,
      51,    52,    53,    54,     0,    49,    50,    51,    52,    53,
      54,   179,    44,    45,    46,    47,     0,    48,   186,    44,
      45,    46,    47,     0,    48,   187,    44,    45,    46,    47,
       0,    48,     0,    49,    50,    51,    52,    53,    54,     0,
      49,    50,    51,    52,    53,    54,     0,    49,    50,    51,
      52,    53,    54,   190,    44,    45,    46,    47,     0,    48,
     199,    44,    45,    46,    47,     0,    48,   204,    44,    45,
      46,    47,     0,    48,     0,    49,    50,    51,    52,    53,
      54,     0,    49,    50,    51,    52,    53,    54,     0,    49,
      50,    51,    52,    53,    54,   206,    44,    45,    46,    47,
       0,    48,   213,    44,    45,    46,    47,     0,    48,   214,
      44,    45,    46,    47,     0,    48,     0,    49,    50,    51,
      52,    53,    54,     0,    49,    50,    51,    52,    53,    54,
       0,    49,    50,    51,    52,    53,    54,   220,    44,    45,
      46,    47,     0,    48,   225,    44,    45,    46,    47,     0,
      48,   226,    44,    45,    46,    47,     0,    48,     0,    49,
      50,    51,    52,    53,    54,     0,    49,    50,    51,    52,
      53,    54,     0,    49,    50,    51,    52,    53,    54,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
      44,    45,    46,    47,    72,    48,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    73,     0,     0,     0,
       0,    49,    50,    51,    52,    53,    54,    44,    45,    46,
      47,     0,    48,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,    74,   105,     0,     0,    49,    50,
      51,    52,    53,    54,     0,   121,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   101,   102,   103,
     104,     0,   105,     0,     0,     0,     0,   101,   102,   103,
     104,     0,   105,   122,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   123,     0,     0,     0,   106,   107,
     108,   109,   110,   111,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    92,    93,    94,
      95
};

static const yytype_int16 yycheck[] =
{
      17,    33,    18,    19,    36,     0,    23,    24,    25,    67,
      68,    69,    70,     8,    31,    32,     9,    20,    21,    22,
      23,    38,    25,    10,    11,    57,    13,    44,    45,    46,
      47,    14,    49,    50,    51,    52,    53,    54,    22,    23,
      14,    25,     4,   101,   102,   103,   104,    15,   106,   107,
     108,   109,   110,   111,    26,     3,     4,     5,     3,     4,
       5,     9,    22,    23,    14,    25,    14,    15,    14,    14,
      14,    19,     3,     4,     5,    92,    93,    94,    95,    27,
      16,    29,    14,    14,     6,     7,    34,    35,    36,    37,
      35,    36,    37,    32,    33,    14,   113,     3,     4,     5,
       3,     4,    16,     9,    35,    36,    37,     3,    14,    15,
       4,    14,    25,    19,    18,   147,   148,   149,   150,    16,
      19,    27,     3,    29,    16,    18,    14,   144,    34,    35,
      36,    37,    35,    36,    37,    25,   168,     3,     4,     5,
       3,    16,    16,     9,     3,     4,   163,    16,    14,    16,
      28,    17,    17,    19,     3,    14,    17,   174,   175,   176,
     177,    27,    15,    29,    16,    16,    28,    14,    34,    35,
      36,    37,   189,    16,    14,   192,    35,    36,    37,    17,
      16,   198,    17,   200,     7,    16,     3,     4,     5,    16,
     207,   208,     9,    17,     7,    17,    16,    14,   215,    17,
      17,    15,    19,     7,   221,   222,    20,    21,    22,    23,
      27,    25,    29,    16,     7,    17,    17,    34,    35,    36,
      37,     3,     4,     5,    -1,    16,    -1,     9,    20,    21,
      22,    23,    14,    25,    15,    17,    -1,    19,    17,    20,
      21,    22,    23,    17,    25,    27,    17,    29,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    15,
      17,    -1,    19,    -1,    20,    21,    22,    23,    -1,    25,
      27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    14,    -1,    15,    17,    -1,    19,    -1,    20,
      21,    22,    23,    -1,    25,    27,    -1,    29,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      17,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    14,    -1,    15,    17,    -1,    19,    -1,    20,
      21,    22,    23,    -1,    25,    27,    -1,    29,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    15,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    15,    25,    -1,    -1,    -1,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    15,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    15,    25,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    15,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    15,    25,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    19,
      20,    21,    22,    23,    -1,    25,    19,    20,    21,    22,
      23,    -1,    25,    19,    20,    21,    22,    23,    -1,    25,
      -1,    41,    42,    43,    44,    45,    46,    -1,    41,    42,
      43,    44,    45,    46,    -1,    41,    42,    43,    44,    45,
      46,    19,    20,    21,    22,    23,    -1,    25,    19,    20,
      21,    22,    23,    -1,    25,    19,    20,    21,    22,    23,
      -1,    25,    -1,    41,    42,    43,    44,    45,    46,    -1,
      41,    42,    43,    44,    45,    46,    -1,    41,    42,    43,
      44,    45,    46,    19,    20,    21,    22,    23,    -1,    25,
      19,    20,    21,    22,    23,    -1,    25,    19,    20,    21,
      22,    23,    -1,    25,    -1,    41,    42,    43,    44,    45,
      46,    -1,    41,    42,    43,    44,    45,    46,    -1,    41,
      42,    43,    44,    45,    46,    19,    20,    21,    22,    23,
      -1,    25,    19,    20,    21,    22,    23,    -1,    25,    19,
      20,    21,    22,    23,    -1,    25,    -1,    41,    42,    43,
      44,    45,    46,    -1,    41,    42,    43,    44,    45,    46,
      -1,    41,    42,    43,    44,    45,    46,    19,    20,    21,
      22,    23,    -1,    25,    19,    20,    21,    22,    23,    -1,
      25,    19,    20,    21,    22,    23,    -1,    25,    -1,    41,
      42,    43,    44,    45,    46,    -1,    41,    42,    43,    44,
      45,    46,    -1,    41,    42,    43,    44,    45,    46,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    35,    25,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    36,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    37,    25,    -1,    -1,    41,    42,
      43,    44,    45,    46,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    25,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    37,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    48,    14,     0,     8,    10,    11,    13,    49,
      50,    51,    14,     3,     4,     5,     9,    14,    15,    19,
      27,    29,    34,    35,    36,    37,    53,    58,     4,    52,
      15,    26,    14,    14,     4,    58,    16,    14,    14,    14,
      58,    58,    58,    19,    20,    21,    22,    23,    25,    41,
      42,    43,    44,    45,    46,    18,    19,    16,    58,    58,
      49,    15,    49,     3,    58,     3,     4,    14,    35,    36,
      37,    59,    35,    36,    37,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,     4,    49,    19,    15,    15,
      17,    18,    43,    44,    45,    46,    59,    59,    59,    59,
      15,    20,    21,    22,    23,    25,    41,    42,    43,    44,
      45,    46,    17,    16,    19,     3,    58,    58,    58,    58,
      15,    35,    36,    37,    16,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,     5,    58,    18,    15,    15,
      15,    15,    54,    55,    14,    19,     3,    16,    16,    16,
      16,    17,    32,    33,    56,    57,    58,    17,    15,    49,
      49,    49,    49,    28,     3,    15,     6,     7,    16,    17,
      17,    17,    17,    58,    28,    16,    14,    16,    49,    19,
      58,    58,    58,     5,    58,    17,    19,    19,    15,    14,
      19,    17,    16,    58,    17,     7,    58,    15,    16,    19,
      16,    58,    17,    58,    19,     7,    19,    17,    16,    17,
      58,    58,     7,    19,    19,    16,    17,    17,    58,     7,
      19,    16,    17,    58,    58,    19,    19,    17,    17
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 42 ".\\1707086.y"
    {printf("\nSuccessful compilation\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 43 ".\\1707086.y"
    {printf("\nFunction Declaration Successful\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 51 ".\\1707086.y"
    {printf("\nvalid declaration\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 59 ".\\1707086.y"
    {	if(key_for_storage_table((yyvsp[(3) - (3)].varname))) {
						printf("\n%s is already declared one\n", (yyvsp[(3) - (3)].varname) );
					} else {
						insert(&store[cnt],(yyvsp[(3) - (3)].varname), cnt);
						cnt++;			
					}
				;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 67 ".\\1707086.y"
    {	if(key_for_storage_table((yyvsp[(1) - (1)].varname))) {
					printf("\n%s is already declared here\n", (yyvsp[(1) - (1)].varname) );
				} else {
					insert(&store[cnt],(yyvsp[(1) - (1)].varname), cnt);
					cnt++;
				}
			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 79 ".\\1707086.y"
    {printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].num)));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 81 ".\\1707086.y"
    {	if(key_for_storage_table((yyvsp[(1) - (4)].varname))) {
										int i = key_for_symbol_table((yyvsp[(1) - (4)].varname));
										if (!i){
											insert(&symbol[cntt], (yyvsp[(1) - (4)].varname), (yyvsp[(3) - (4)].num));
											cntt++;
										}
										symbol[i].n = (yyvsp[(3) - (4)].num);
										printf("\n(%s) Value of the variable: %d\t\n",(yyvsp[(1) - (4)].varname),symbol[i].n );
									} else {
										printf("\n%s not declared yet\n",(yyvsp[(1) - (4)].varname));
									}
							
								;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 95 ".\\1707086.y"
    {printf("\nSWITCH case.\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 97 ".\\1707086.y"
    {	if((yyvsp[(3) - (8)].num)) {
																	printf("\nValue of expression in IF: %d\n",((yyvsp[(6) - (8)].num)));
																} else {
																	printf("\ncondition value zero in IF block\n");
																}
														 	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 104 ".\\1707086.y"
    {	if((yyvsp[(3) - (13)].num)) {
																					printf("\nValue of expression in IF: %d\n",(yyvsp[(6) - (13)].num));
																				} else {
																					printf("\nValue of expression in ELSE: %d\n",(yyvsp[(11) - (13)].num));
																				}
								                                            ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 111 ".\\1707086.y"
    {	  if((yyvsp[(3) - (26)].num)) {
											if((yyvsp[(8) - (26)].num)) {
												printf("\nValue of expression in between IF: %d\n",(yyvsp[(11) - (26)].num));
											} else {
												printf("\nValue of expression in between ELSE: %d\n",(yyvsp[(16) - (26)].num));
											}
											printf("\nValue of expression in parent IF: %d\n",(yyvsp[(19) - (26)].num));
										} else {
											printf("\nValue of expression in parent ELSE: %d\n",(yyvsp[(24) - (26)].num));
										}
								    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 123 ".\\1707086.y"
    {	  if((yyvsp[(3) - (26)].num)) {
									printf("\nValue of expression in parent IF: %d\n",(yyvsp[(6) - (26)].num));
									} else {
										if((yyvsp[(13) - (26)].num)) {
												printf("\nValue of expression in between IF: %d\n",(yyvsp[(16) - (26)].num));
										} else {
												printf("\nValue of expression in between ELSE: %d\n",(yyvsp[(21) - (26)].num));
										}
										printf("\nValue of expression in parent ELSE: %d\n",(yyvsp[(24) - (26)].num));
									}
							;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 135 ".\\1707086.y"
    {
								 	if((yyvsp[(3) - (21)].num)) {
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (21)].num));
									} else if((yyvsp[(11) - (21)].num)) {
										printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(14) - (21)].num));
									} else {
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(19) - (21)].num));
									}
								;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 145 ".\\1707086.y"
    {
	    	int i=0;
	    	printf("\n");
			int a = (yyvsp[(7) - (11)].num);
	    	for(i = (yyvsp[(3) - (11)].num); i <= (yyvsp[(5) - (11)].num); i=i+a) { 
	   			printf("For loop statement and iterator i is %d\n", i);
	    	}
            printf("\n");
		;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 155 ".\\1707086.y"
    {
			int i = (yyvsp[(3) - (9)].num);
			printf("\n");
            while(i < (yyvsp[(5) - (9)].num)) {
				printf("While loop\n");
				++i;
			}
			if ((yyvsp[(3) - (9)].num) >= (yyvsp[(5) - (9)].num)) {
				printf("While loop did not run\n");
			}
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 167 ".\\1707086.y"
    {
            int i = (yyvsp[(3) - (9)].num);
			printf("\n");
            while(i > (yyvsp[(5) - (9)].num)) {
				printf("While loop\n");
				--i;
			}
			if ((yyvsp[(3) - (9)].num) <= (yyvsp[(5) - (9)].num)) {
				printf("While loop did not run\n");
			}
		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 179 ".\\1707086.y"
    {
           int i = (yyvsp[(3) - (9)].num);
		   printf("\n");
            while(i >= (yyvsp[(5) - (9)].num)) {
				printf("While loop\n");
				--i;
			}
			if ((yyvsp[(3) - (9)].num) < (yyvsp[(5) - (9)].num)) {
				printf("While loop did not run\n");
			}
		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 191 ".\\1707086.y"
    {
            int i = (yyvsp[(3) - (9)].num);
			printf("\n");
            while(i <= (yyvsp[(5) - (9)].num)) {
				printf("\nWhile loop\n");
				++i;
			}
			if ((yyvsp[(3) - (9)].num) > (yyvsp[(5) - (9)].num)) {
				printf("While loop did not run\n");
			}
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 203 ".\\1707086.y"
    {printf("\nFunction Called\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 217 ".\\1707086.y"
    { 	if(val==(yyvsp[(2) - (5)].num)) {
							  				track=1;
							  				printf("\nCase No : %d  and Result :  %d\n",(yyvsp[(2) - (5)].num),(yyvsp[(4) - (5)].num));
										}
									;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 224 ".\\1707086.y"
    {	if(track!=1) {
											printf("\nResult in default Value is :  %d\n",(yyvsp[(3) - (4)].num));
										}
										track=0;
									;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 233 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); 	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 235 ".\\1707086.y"
    { (yyval.num) = symbol[key_for_symbol_table((yyvsp[(1) - (1)].varname))].n ; printf("\nVariable value: %d\n",(yyval.num));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 237 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 239 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 241 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 243 ".\\1707086.y"
    { 	if((yyvsp[(3) - (3)].num)) 
				  		{
				     			(yyval.num) = (yyvsp[(1) - (3)].num) / (yyvsp[(3) - (3)].num);
				  		}
				  		else
				  		{
							(yyval.num) = 0;
							printf("\nDivision by zero\t");
				  		} 	
				    	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 254 ".\\1707086.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)].num);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.num)=mult;
						
					 ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 264 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) < (yyvsp[(3) - (3)].num); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 266 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) > (yyvsp[(3) - (3)].num); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 268 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) <= (yyvsp[(3) - (3)].num); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 270 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) >= (yyvsp[(3) - (3)].num); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 272 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) == (yyvsp[(3) - (3)].num); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 274 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) != (yyvsp[(3) - (3)].num); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 276 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(2) - (3)].num); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 278 ".\\1707086.y"
    { (yyval.num)=(yyvsp[(2) - (3)].num)+1; printf("\ninc value: %d\n",(yyval.num));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 280 ".\\1707086.y"
    { (yyval.num)=(yyvsp[(2) - (3)].num)-1; printf("\ndec value: %d\n",(yyval.num));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 282 ".\\1707086.y"
    {
							if((yyvsp[(2) - (3)].num) != 0) {
								(yyval.num) = 0; printf("\nnot value: %d\n",(yyval.num));
							} else{
								(yyval.num) = 1 ; printf("\naffirmative value: %d\n",(yyval.num));
							}
						;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 293 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); val = (yyval.num);	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 295 ".\\1707086.y"
    { (yyval.num) = symbol[key_for_symbol_table((yyvsp[(1) - (1)].varname))].n ; val = (yyval.num);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 297 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num); val = (yyval.num); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 299 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num); val = (yyval.num); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 301 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);  val = (yyval.num);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 303 ".\\1707086.y"
    { 	if((yyvsp[(3) - (3)].num)) 
				  		{
				     			(yyval.num) = (yyvsp[(1) - (3)].num) / (yyvsp[(3) - (3)].num); val = (yyval.num);
				  		}
				  		else
				  		{
							(yyval.num) = 0;
							 val = (yyval.num);
				  		} 	
				    	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 314 ".\\1707086.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)].num);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.num)=mult; val = (yyval.num);
						
					 ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 324 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) < (yyvsp[(3) - (3)].num); val = (yyval.num); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 326 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) > (yyvsp[(3) - (3)].num);  val = (yyval.num);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 328 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) <= (yyvsp[(3) - (3)].num); val = (yyval.num); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 330 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) >= (yyvsp[(3) - (3)].num); val = (yyval.num); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 332 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) == (yyvsp[(3) - (3)].num); val = (yyval.num); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 334 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) != (yyvsp[(3) - (3)].num); val = (yyval.num); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 336 ".\\1707086.y"
    { (yyval.num) = (yyvsp[(2) - (3)].num);	 val = (yyval.num);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 338 ".\\1707086.y"
    { (yyval.num)=(yyvsp[(2) - (3)].num)+1; printf("inc: %d\n",(yyval.num)); val = (yyval.num);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 340 ".\\1707086.y"
    { (yyval.num)=(yyvsp[(2) - (3)].num)-1; printf("dec: %d\n",(yyval.num)); val = (yyval.num);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 342 ".\\1707086.y"
    {	if((yyvsp[(2) - (3)].num) != 0) {
										(yyval.num) = 0; val = (yyval.num);
									} else {
										(yyval.num) = 1 ; val = (yyval.num);
									}
								;}
    break;



/* Line 1455 of yacc.c  */
#line 2235 "1707086.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 350 ".\\1707086.y"



void insert(storage *p, char *s, int n) {
  	p->str = s;
  	p->n = n;
}

int key_for_storage_table(char *key) {
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}

int key_for_symbol_table(char *key)
{
    int i = 1;
    char *name = symbol[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = symbol[++i].str;
    }
    return 0;
}



int yywrap()
{
	return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}


