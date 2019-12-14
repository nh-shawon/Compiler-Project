
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
#line 3 "compiler.y"

	#include<stdio.h>
	#include <math.h>
    	#define YYSTYPE int		
	int sym[26];
	int freq[26];
	int value ;
	int op1,op2,op3,operator ;
	int c1,c2,op;
	int f1 = 0 ;
	
	int casevalue[100] ;
	int casestatement[100];
	int sop1[100],sop2[100],sop3[100],soperator[100] ;
	int p = 0 ,s= 0;
	
	
	void loopOperation()
	{
		
		        if(operator==1)
			sym[op1] = sym[op2] +op3;
			
			if (operator==2)
			sym[op1] = sym[op2] -op3;
			
			
			if (operator==3)
			sym[op1] = sym[op2] *op3;
			
			if (operator==4)
			sym[op1] = sym[op2] / op3;

			if (operator==5) {
				sym[op1] = sym[op2] % op3;
			}
			if (operator==6) {
				sym[op1] = pow(sym[op2],op3);
			}
			
		printf("result is : %d\n",sym[op1]);
	}
	
	
	int switchOperation(int i)
	
	{
		
			if(soperator[i]==1)
			sym[sop1[i]] = sym[sop2[i]] +sop3[i];
			
			if (soperator[i]==2)
			sym[sop1[i]] = sym[sop2[i]] -sop3[i];
			
			
			if (soperator[i]==3)
			sym[sop1[i]] = sym[sop2[i]] *sop3[i];
			
			if (soperator[i]==4)
			{
				sym[sop1[i]] = sym[sop2[i]] / sop3[i];
			}
		return sym[sop1[i]] ;
	}
	
	
	
	
	


/* Line 189 of yacc.c  */
#line 145 "compiler.tab.c"

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
     ELSE = 261,
     MAINFUNCTION = 262,
     INT = 263,
     FLOAT = 264,
     CHAR = 265,
     ID = 266,
     PRINT = 267,
     REPEAT = 268,
     CASE = 269,
     DEFAULT = 270,
     SWITCH = 271,
     SQUARE = 272,
     IFX = 273
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "compiler.tab.c"

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
#define YYLAST   220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      25,    26,    23,    21,    34,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    29,
      19,    31,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    33,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
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
      15,    16,    17,    18
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    16,    19,    22,    29,
      40,    48,    55,    59,    66,    73,    80,    87,    94,   101,
     108,   115,   122,   129,   131,   135,   139,   144,   149,   154,
     157,   159,   161,   163,   167,   169,   172,   174,   176,   178,
     182,   186,   190,   194,   198,   202,   206,   210,   215,   219,
     224,   228,   233,   236,   240
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,     7,    25,    26,    27,    37,    28,    -1,
      -1,    37,    38,    -1,    29,    -1,    42,    29,    -1,    46,
      29,    -1,     5,    30,    46,    27,    38,    28,    -1,     5,
      30,    46,    27,    38,    28,     6,    27,    38,    28,    -1,
      13,    25,    41,    26,    27,    39,    28,    -1,    16,    30,
      46,    27,    47,    28,    -1,    27,    45,    28,    -1,     4,
      31,     4,    21,     3,    29,    -1,     4,    31,     4,    22,
       3,    29,    -1,     4,    31,     4,    23,     3,    29,    -1,
       4,    31,     4,    24,     3,    29,    -1,     4,    31,     4,
      32,     3,    29,    -1,     4,    31,     4,    33,     3,    29,
      -1,     4,    31,     4,    21,     3,    29,    -1,     4,    31,
       4,    22,     3,    29,    -1,     4,    31,     4,    23,     3,
      29,    -1,     4,    31,     4,    24,     3,    29,    -1,     4,
      -1,     4,    19,     3,    -1,     4,    20,     3,    -1,     4,
      31,    31,     3,    -1,     4,    20,    31,     3,    -1,     4,
      19,    31,     3,    -1,    43,    44,    -1,     8,    -1,     9,
      -1,    10,    -1,    44,    34,    46,    -1,    46,    -1,    45,
      38,    -1,    38,    -1,     3,    -1,     4,    -1,     4,    31,
      46,    -1,    46,    21,    46,    -1,    46,    22,    46,    -1,
      46,    23,    46,    -1,    46,    24,    46,    -1,    46,    32,
      46,    -1,    46,    33,    46,    -1,    46,    19,    46,    -1,
      46,    19,    31,    46,    -1,    46,    20,    46,    -1,    46,
      20,    31,    46,    -1,    25,    46,    26,    -1,    17,    25,
      46,    26,    -1,    48,    47,    -1,    15,    30,    40,    -1,
      14,     3,    30,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    99,   100,   106,   108,   110,   116,   130,
     146,   229,   264,   267,   276,   286,   296,   303,   310,   322,
     331,   342,   352,   365,   374,   385,   395,   403,   411,   424,
     428,   429,   430,   433,   438,   446,   448,   454,   456,   459,
     465,   467,   469,   471,   481,   482,   483,   484,   485,   486,
     487,   488,   492,   494,   503
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELSE",
  "MAINFUNCTION", "INT", "FLOAT", "CHAR", "ID", "PRINT", "REPEAT", "CASE",
  "DEFAULT", "SWITCH", "SQUARE", "IFX", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "'{'", "'}'", "';'", "':'", "'='", "'%'", "'^'",
  "','", "$accept", "program", "someStatement", "statement", "insideLoop",
  "switchCalculation", "check", "declartion", "TYPE", "ID1",
  "statement_list", "expression", "insideSwitch", "caseBlock", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    60,
      62,    43,    45,    42,    47,    40,    41,   123,   125,    59,
      58,    61,    37,    94,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    38,
      38,    38,    38,    39,    39,    39,    39,    39,    39,    40,
      40,    40,    40,    41,    41,    41,    41,    41,    41,    42,
      43,    43,    43,    44,    44,    45,    45,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    47,    47,    48
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     2,     2,     6,    10,
       7,     6,     3,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     1,     3,     3,     4,     4,     4,     2,
       1,     1,     1,     3,     1,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       3,     4,     2,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    37,    38,
       0,    30,    31,    32,     0,     0,     0,     0,     0,     2,
       5,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     6,    29,    34,     0,     0,     0,     0,
       0,     0,     7,     0,     0,    39,     0,    23,     0,     0,
       0,    50,    12,    35,     0,     0,    46,     0,    48,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,    51,    33,    47,    49,     0,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     8,    28,    27,    26,
       0,     0,     0,     0,    11,    52,     0,     0,    10,     0,
       0,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      18,     0,     0,     0,     0,    19,    20,    21,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    21,    91,   101,    48,    22,    23,    34,
      32,    24,    84,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -20
static const yytype_int16 yypact[] =
{
       4,   -19,     8,    -9,   -20,    -8,   -20,    41,   -20,     2,
       6,   -20,   -20,   -20,    15,    25,    17,    31,    96,   -20,
     -20,   -20,    34,    31,    95,    31,    31,    61,    31,    31,
     110,   -20,    69,   -20,    37,   170,     1,    12,    31,    31,
      31,    31,   -20,    31,    31,   170,   125,    33,    65,   140,
     155,   -20,   -20,   -20,    31,    31,   174,    31,   174,    57,
      57,    43,    43,   170,   170,    96,    -1,     0,    36,    56,
      73,   -20,   170,   170,   170,    64,   -20,    90,   -20,    92,
      99,   103,   100,    78,    82,    73,   105,   -20,   -20,   -20,
      89,    94,   107,   122,   -20,   -20,   108,   134,   -20,   122,
     109,   -20,    96,   187,   -20,   135,   113,   147,   148,   150,
     151,   152,   153,    38,   -20,   136,   137,   139,   141,   142,
     154,   166,   177,   179,   181,   -20,   -20,   -20,   -20,   -20,
     -20,   156,   157,   171,   172,   -20,   -20,   -20,   -20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -20,   -20,   -20,   -18,   -20,   106,   -20,   -20,   -20,   -20,
     -20,   -16,   114,   -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    30,    76,    78,     8,     9,     3,    35,     4,    45,
      46,     1,    49,    50,    53,     8,     9,     5,    16,     6,
      56,    58,    59,    60,    61,    62,    17,    63,    64,    16,
      77,    79,    55,    25,     8,     9,    26,    17,    72,    73,
      27,    74,    29,    57,     8,     9,    10,    75,    16,    11,
      12,    13,    66,    67,    14,    28,    17,    15,    16,   121,
     122,   123,   124,    33,    68,    47,    17,    80,    18,    19,
      20,    54,     8,     9,    10,    43,    44,    11,    12,    13,
      40,    41,    14,    81,   106,    15,    16,    82,    83,    43,
      44,    69,    86,    87,    17,    88,    18,    52,    20,     8,
       9,    10,    89,    92,    11,    12,    13,    90,    93,    14,
      94,    96,    15,    16,    36,    37,    38,    39,    40,    41,
      97,    17,    98,    18,    42,    20,   100,    43,    44,    36,
      37,    38,    39,    40,    41,   102,    51,    99,   103,   113,
     105,   114,    43,    44,    36,    37,    38,    39,    40,    41,
     115,   116,    65,   117,   118,   119,   120,    43,    44,    36,
      37,    38,    39,    40,    41,   125,   126,    70,   127,   131,
     128,   129,    43,    44,    36,    37,    38,    39,    40,    41,
     132,    71,   133,   130,   134,   135,   136,    43,    44,    36,
      37,    38,    39,    40,    41,    38,    39,    40,    41,    95,
     137,   138,    43,    44,     0,   104,    43,    44,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,   111,
     112
};

static const yytype_int8 yycheck[] =
{
      18,    17,     3,     3,     3,     4,    25,    23,     0,    25,
      26,     7,    28,    29,    32,     3,     4,    26,    17,    27,
      36,    37,    38,    39,    40,    41,    25,    43,    44,    17,
      31,    31,    31,    31,     3,     4,    30,    25,    54,    55,
      25,    57,    25,    31,     3,     4,     5,    65,    17,     8,
       9,    10,    19,    20,    13,    30,    25,    16,    17,    21,
      22,    23,    24,    29,    31,     4,    25,    31,    27,    28,
      29,    34,     3,     4,     5,    32,    33,     8,     9,    10,
      23,    24,    13,    27,   102,    16,    17,    14,    15,    32,
      33,    26,    28,     3,    25,     3,    27,    28,    29,     3,
       4,     5,     3,     3,     8,     9,    10,     4,    30,    13,
      28,     6,    16,    17,    19,    20,    21,    22,    23,    24,
      31,    25,    28,    27,    29,    29,     4,    32,    33,    19,
      20,    21,    22,    23,    24,    27,    26,    30,     4,     4,
      31,    28,    32,    33,    19,    20,    21,    22,    23,    24,
       3,     3,    27,     3,     3,     3,     3,    32,    33,    19,
      20,    21,    22,    23,    24,    29,    29,    27,    29,     3,
      29,    29,    32,    33,    19,    20,    21,    22,    23,    24,
       3,    26,     3,    29,     3,    29,    29,    32,    33,    19,
      20,    21,    22,    23,    24,    21,    22,    23,    24,    85,
      29,    29,    32,    33,    -1,    99,    32,    33,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    36,    25,     0,    26,    27,    37,     3,     4,
       5,     8,     9,    10,    13,    16,    17,    25,    27,    28,
      29,    38,    42,    43,    46,    31,    30,    25,    30,    25,
      46,    38,    45,    29,    44,    46,    19,    20,    21,    22,
      23,    24,    29,    32,    33,    46,    46,     4,    41,    46,
      46,    26,    28,    38,    34,    31,    46,    31,    46,    46,
      46,    46,    46,    46,    46,    27,    19,    20,    31,    26,
      27,    26,    46,    46,    46,    38,     3,    31,     3,    31,
      31,    27,    14,    15,    47,    48,    28,     3,     3,     3,
       4,    39,     3,    30,    28,    47,     6,    31,    28,    30,
       4,    40,    27,     4,    40,    31,    38,    21,    22,    23,
      24,    32,    33,     4,    28,     3,     3,     3,     3,     3,
       3,    21,    22,    23,    24,    29,    29,    29,    29,    29,
      29,     3,     3,     3,     3,    29,    29,    29,    29
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
        case 7:

/* Line 1455 of yacc.c  */
#line 110 "compiler.y"
    { 
							
						
							//	printf("value of expression: %d\n", $1);
														
						;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 116 "compiler.y"
    {
								if((yyvsp[(3) - (6)]))
								{
									//printf("\nonly if true and value: %d",$3);
									printf("value of expression in IF: %d\n",(yyvsp[(5) - (6)]));
									
								}
								
								else
								{
									printf("condition value zero in IF block\n");
								}
								
							;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 130 "compiler.y"
    {
								 	if((yyvsp[(3) - (10)])  )
									{
										
										//printf("\nonly else if true and value: %d",$3);
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(5) - (10)]));
						
									}
									else
									{	
										//printf("\nonly else else true");
										printf("value of expression in ELSE: %d\n",(yyvsp[(9) - (10)]));
							
									}
								   ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 148 "compiler.y"
    {
	    			
	    				if ( c2 ==-1 )
	    				{
	    					//printf("%d  \n",sym[c1]) ;
	    					while (sym[c1])
	    					{
	    					
	    						loopOperation() ;	
	    						
	    					}
	    					
	    				}
	    			
	    			
	    				if (op==1)
	    				{
	    					//printf("%d  %d\n",sym[c1],c2) ;
	    					while(sym[c1]<c2)
	    					{
	    					
	    						loopOperation() ;	
	    						
	    					}
	    						
	    				}
	    				
	    				
	    				if (op==2)
	    				{
	    					
	    					//printf(" %d  %d ",sym[c1],c2);
	    					
	    					while(sym[c1] > c2  )
	    					{
	    					
	    						loopOperation() ;
	    					
	    					}
	    					
	    				}
	    				
	    				if (op==3)
	    				{
	    					
	    					//printf("%d  %d\n",sym[c1],c2) ;
	    					while(sym[c1] == c2)
	    					{
	    					
	    						loopOperation() ;
	    					
	    					}
	    					
	    				}
					if (op==4)
	    				{
	    					
	    					//printf("%d  %d\n",sym[c1],c2) ;
	    					while(sym[c1] >= c2)
	    					{
	    					
	    						loopOperation() ;
	    					
	    					}
	    					
	    				}
					if (op==5)
	    				{
	    					
	    					//printf("%d  %d\n",sym[c1],c2) ;
	    					while(sym[c1] <= c2)
	    					{
	    					
	    						loopOperation() ;
	    					
	    					}
	    					
	    				}
	    			
	   			 ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 229 "compiler.y"
    {
	
								value = (yyvsp[(3) - (6)]) ;
								
								int v =0 ;
								int f2 = 1 ;
								
								
								
								for ( v=0;v<p;v++)
								{
								
									if (value == casevalue[v] )
									{
										
										printf("result of evaluation is :  %d\n",switchOperation(v) );	
										
										f2 =0 ;
										
									}
									
							        }
								
								if (f2==1) {
								
									printf("default value is : %d\n",switchOperation(p));
								
								}
							;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 264 "compiler.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 267 "compiler.y"
    {
					op1 = (yyvsp[(1) - (6)]) 	;
					op2 = (yyvsp[(3) - (6)]) 	;
					op3 = (yyvsp[(5) - (6)])	;
					operator = 1    ;
					
				;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 276 "compiler.y"
    {
				
					op1 = (yyvsp[(1) - (6)]) 	;
					op2 = (yyvsp[(3) - (6)]) 	;
					op3 = (yyvsp[(5) - (6)])	;
					operator = 2    ;
					
				;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 286 "compiler.y"
    {
				
					op1 = (yyvsp[(1) - (6)]) 	;
					op2 = (yyvsp[(3) - (6)]) 	;
					op3 = (yyvsp[(5) - (6)])	;
					operator = 3    ;
				;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 296 "compiler.y"
    {
				
					op1 = (yyvsp[(1) - (6)]) 	;
					op2 = (yyvsp[(3) - (6)]) 	;
					op3 = (yyvsp[(5) - (6)])	;
					operator = 4    ;
				;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 303 "compiler.y"
    {
				
					op1 = (yyvsp[(1) - (6)]) 	;
					op2 = (yyvsp[(3) - (6)]) 	;
					op3 = (yyvsp[(5) - (6)])	;
					operator = 5    ;
				;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 310 "compiler.y"
    {
				
					op1 = (yyvsp[(1) - (6)]) 	;
					op2 = (yyvsp[(3) - (6)]) 	;
					op3 = (yyvsp[(5) - (6)])	;
					operator = 6    ;
				;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 322 "compiler.y"
    {
					sop1[s] = (yyvsp[(1) - (6)]) 	;
					sop2[s] = (yyvsp[(3) - (6)]) 	;
					sop3[s] = (yyvsp[(5) - (6)])	;
					soperator[s] = 1    ;
					s++ ;
				;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 331 "compiler.y"
    {
				
					sop1[s] = (yyvsp[(1) - (6)]) 	;
					sop2[s] = (yyvsp[(3) - (6)]) 	;
					sop3[s] = (yyvsp[(5) - (6)])	;
					soperator[s] = 2    ;
					s++ ;
					
				;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 342 "compiler.y"
    {
				
					sop1[s] = (yyvsp[(1) - (6)]) 	;
					sop2[s] = (yyvsp[(3) - (6)]) 	;
					sop3[s] = (yyvsp[(5) - (6)])	;
					soperator[s] = 3    ;
					s++ ;
				;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 352 "compiler.y"
    {
				
					sop1[s] = (yyvsp[(1) - (6)]) 	;
					sop2[s] = (yyvsp[(3) - (6)]) 	;
					sop3[s] = (yyvsp[(5) - (6)])	;
					soperator[s] = 4    ;
					s++ ;
				;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 366 "compiler.y"
    {
	c1= (yyvsp[(1) - (1)]);
	c2= -1;
	//printf("only var");
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 375 "compiler.y"
    {
	c1= (yyvsp[(1) - (3)]);
	c2= (yyvsp[(3) - (3)]);
	op= 1;
	//printf("var < num");
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 386 "compiler.y"
    {
	c1=(yyvsp[(1) - (3)]);
	c2=(yyvsp[(3) - (3)]);
	op=2;
	//printf("var > num");
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 396 "compiler.y"
    {
	c1=(yyvsp[(1) - (4)]);
	c2=(yyvsp[(4) - (4)]);
	op=3;
	//printf("var == num");
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 404 "compiler.y"
    {
	c1=(yyvsp[(1) - (4)]);
	c2=(yyvsp[(4) - (4)]);
	op=4;
	//printf("var >= num");
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 412 "compiler.y"
    {
	c1=(yyvsp[(1) - (4)]);
	c2=(yyvsp[(4) - (4)]);
	op=5;
	//printf("var <= num");
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 433 "compiler.y"
    {  
                       if (freq[(yyvsp[(3) - (3)])]==0) freq[(yyvsp[(3) - (3)])]++;
                       else printf("declaration error "); 
	                 ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 438 "compiler.y"
    {
                  if (freq[(yyvsp[(1) - (1)])]==0) freq[(yyvsp[(1) - (1)])]++;
                  else printf("declaration error "); 
	            
	            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 449 "compiler.y"
    { (yyval) = (yyvsp[(1) - (1)]);   // printf("inside if or else down\n");
				 ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 454 "compiler.y"
    { (yyval) = (yyvsp[(1) - (1)]); 	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 456 "compiler.y"
    { (yyval) = sym[(yyvsp[(1) - (1)])]; //printf("e:var %d \n",$1);
						;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 459 "compiler.y"
    { 
							(yyval) = (yyvsp[(3) - (3)]) ; 
							sym[(yyvsp[(1) - (3)])] = (yyvsp[(3) - (3)]); 
							printf("Value of the variable: %d\t\n",(yyvsp[(3) - (3)]));
						;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 465 "compiler.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 467 "compiler.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 469 "compiler.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 471 "compiler.y"
    { 	if((yyvsp[(3) - (3)])) 
				  		{
				     			(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				  		}
				  		else
				  		{
							(yyval) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 481 "compiler.y"
    { (yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 482 "compiler.y"
    { (yyval) = pow((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 483 "compiler.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)])  ;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 484 "compiler.y"
    { (yyval) = (yyvsp[(1) - (4)]) <= (yyvsp[(3) - (4)])  ;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 485 "compiler.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)])  ;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 486 "compiler.y"
    { (yyval) = (yyvsp[(1) - (4)]) >= (yyvsp[(3) - (4)])  ;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 487 "compiler.y"
    { (yyval) = (yyvsp[(2) - (3)])	;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 488 "compiler.y"
    { printf("Value of square(%d) is %d\n",(yyvsp[(3) - (4)]),(yyvsp[(3) - (4)]) * (yyvsp[(3) - (4)])); (yyval) = (yyvsp[(3) - (4)]) * (yyvsp[(3) - (4)]) ;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 492 "compiler.y"
    {
									;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 494 "compiler.y"
    {
		
			//printf("in default\n");
			
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 503 "compiler.y"
    {
					casevalue[p] = (yyvsp[(2) - (4)]) ;
					
					p++ ;						
			;}
    break;



/* Line 1455 of yacc.c  */
#line 2086 "compiler.tab.c"
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
#line 510 "compiler.y"


int yywrap()
{
return 1;
}



yyerror(char *s){
	printf( "%s\n", s);
}

