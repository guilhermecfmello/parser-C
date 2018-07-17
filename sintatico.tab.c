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
#line 1 "sintatico.y" /* yacc.c:339  */

  #include <stdio.h>
  extern int yylex();
  extern char* yytext;
  extern int lines;
  extern int column;
  extern int words;
  extern int chars;
  
  void yyerror(const char* S){
    return ;
  }


#line 81 "sintatico.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sintatico.tab.h".  */
#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    NUM_HEXA = 258,
    NUM_OCTAL = 259,
    NUM_INTEGER = 260,
    IDENTIFIER = 261,
    VOID = 262,
    INT = 263,
    CHAR = 264,
    RETURN = 265,
    CARACTER = 266,
    STRING = 267,
    DO = 268,
    WHILE = 269,
    FOR = 270,
    IF = 271,
    ELSE = 272,
    PLUS = 273,
    MINUS = 274,
    MULTIPLY = 275,
    DIV = 276,
    REMAINDER = 277,
    INC = 278,
    DEC = 279,
    BITWISE_AND = 280,
    BITWISE_OR = 281,
    BITWISE_NOT = 282,
    BITWISE_XOR = 283,
    NOT = 284,
    LOGICAL_AND = 285,
    LOGICAL_OR = 286,
    EQUAL = 287,
    NOT_EQUAL = 288,
    LESS_THAN = 289,
    GREATER_THAN = 290,
    LESS_EQUAL = 291,
    GREATER_EQUAL = 292,
    R_SHIFT = 293,
    L_SHIFT = 294,
    ASSIGN = 295,
    ADD_ASSIGN = 296,
    MINUS_ASSIGN = 297,
    SEMICOLON = 298,
    COMMA = 299,
    COLON = 300,
    L_PAREN = 301,
    R_PAREN = 302,
    L_CURLY_BRACKET = 303,
    R_CURLY_BRACKET = 304,
    L_SQUARE_BRACKET = 305,
    R_SQUARE_BRACKET = 306,
    TERNARY_CONDITIONAL = 307,
    NUMBER_SIGN = 308,
    PRINTF = 309,
    SCANF = 310,
    DEFINE = 311,
    EXIT = 312,
    EOL = 313,
    EOF2 = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 192 "sintatico.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    93,    94,    97,    98,   101,   102,   103,
     106,   109,   110,   113,   116,   117,   120,   123,   124,   127,
     128,   131,   134,   135,   138,   141,   144,   145,   148,   149,
     152,   153,   156,   157,   158,   161,   164,   165,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   181,
     182,   185,   186,   189,   190,   193,   196,   197,   200,   201,
     204,   205,   206,   209,   212,   213,   216,   219,   220,   223,
     226,   227,   230,   233,   234,   237,   240,   241,   244,   247,
     248,   251,   254,   255,   256,   258,   261,   262,   263,   264,
     265,   268,   271,   272,   273,   276,   279,   280,   281,   284,
     287,   288,   289,   290,   293,   294,   297,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   311,   312,   313,   314,
     315,   318,   319,   322,   323,   326,   327,   328,   329,   330,
     333,   334,   335
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM_HEXA", "NUM_OCTAL", "NUM_INTEGER",
  "IDENTIFIER", "VOID", "INT", "CHAR", "RETURN", "CARACTER", "STRING",
  "DO", "WHILE", "FOR", "IF", "ELSE", "PLUS", "MINUS", "MULTIPLY", "DIV",
  "REMAINDER", "INC", "DEC", "BITWISE_AND", "BITWISE_OR", "BITWISE_NOT",
  "BITWISE_XOR", "NOT", "LOGICAL_AND", "LOGICAL_OR", "EQUAL", "NOT_EQUAL",
  "LESS_THAN", "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL", "R_SHIFT",
  "L_SHIFT", "ASSIGN", "ADD_ASSIGN", "MINUS_ASSIGN", "SEMICOLON", "COMMA",
  "COLON", "L_PAREN", "R_PAREN", "L_CURLY_BRACKET", "R_CURLY_BRACKET",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "TERNARY_CONDITIONAL",
  "NUMBER_SIGN", "PRINTF", "SCANF", "DEFINE", "EXIT", "EOL", "EOF2",
  "$accept", "start_parse", "programa", "programa1", "declaracoes",
  "funcao", "asterisco", "declara_vars", "declara_vars2",
  "declaracao_de_variaveis", "desvio1", "desvio2", "desvio3", "desvio4",
  "declaracao_de_prototipos", "parametros", "par1", "par2", "par3", "tipo",
  "bloco", "comandos", "lista_de_comandos", "lista1", "lista2", "lista3",
  "expressao", "exp1", "expressao_de_atribuicao", "exp2",
  "expressao_condicional", "exp3", "expressao_or_logico", "exp4",
  "expressao_and_logico", "exp5", "expressao_or", "exp6", "expressao_xor",
  "exp7", "expressao_and", "exp8", "expressao_de_igualdade", "exp9",
  "expressao_relacional", "exp10", "expressao_shift", "exp11",
  "expressao_aditiva", "exp12", "expressao_multiplicativa", "exp13",
  "expressao_cast", "exp14", "expressao_unaria", "expressao_pos_fixa",
  "exp15", "exp16", "expressao_primaria", "numero", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -194

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-194)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,  -194,  -194,  -194,   -38,    29,   -12,    16,    16,  -194,
    -194,    22,    43,  -194,  -194,  -194,  -194,  -194,    22,    46,
    -194,   135,  -194,   -16,  -194,  -194,  -194,  -194,  -194,  -194,
     135,   135,   135,   270,   270,   135,   135,   135,    96,  -194,
      15,  -194,    37,    34,    76,    87,    89,    42,     0,    36,
      -3,    21,    41,  -194,    39,     4,  -194,  -194,   136,   135,
      82,   -17,  -194,  -194,  -194,  -194,   135,  -194,  -194,  -194,
    -194,  -194,    22,    77,   135,  -194,   135,  -194,   135,  -194,
     135,  -194,   135,  -194,   135,  -194,   135,  -194,   135,   135,
    -194,   135,   135,   135,   135,  -194,   135,   135,  -194,   135,
     135,  -194,   135,   135,   135,  -194,  -194,  -194,  -194,   135,
    -194,  -194,   135,   135,    83,    22,    81,   135,    13,  -194,
     136,    90,  -194,    15,   111,    34,    76,    87,    89,    42,
       0,     0,    36,    36,    36,    36,    -3,    -3,    21,    21,
      41,    41,    41,  -194,   117,   116,   115,  -194,   161,   118,
    -194,  -194,    22,  -194,   223,   136,    22,   135,  -194,   135,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,   135,  -194,
    -194,  -194,   119,  -194,   164,  -194,   135,   124,   127,   129,
     130,  -194,   223,   132,   133,   137,  -194,   139,   223,   143,
    -194,  -194,  -194,  -194,  -194,   135,   138,   118,   146,  -194,
     180,   135,   135,   135,   148,   186,   188,   135,  -194,  -194,
    -194,   150,   136,  -194,  -194,   156,   157,   160,   158,  -194,
     162,   163,   165,   119,  -194,   135,   124,   135,   124,   135,
     166,   183,   167,  -194,   168,  -194,   176,   192,  -194,   177,
     205,  -194,   179,   135,   124,  -194,  -194,   178,  -194,   184,
    -194,   181,   124,  -194,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    34,    32,    33,     0,     0,     0,     6,     6,     8,
       9,    12,     0,     1,     2,     5,     3,     4,    12,     0,
      16,     0,    11,    18,   131,   132,   130,   125,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
      57,    58,    65,    68,    71,    74,    77,    80,    84,    90,
      94,    98,   103,   104,   105,   107,   116,   126,    27,     0,
      20,     0,   112,   105,   113,   111,     0,   108,   109,   110,
     114,   115,    12,     0,     0,    55,     0,    63,     0,    66,
       0,    69,     0,    72,     0,    75,     0,    78,     0,     0,
      81,     0,     0,     0,     0,    85,     0,     0,    91,     0,
       0,    95,     0,     0,     0,    99,    60,    61,    62,     0,
     118,   119,   122,     0,     0,    12,     0,     0,     0,    24,
       0,     0,   129,    57,     0,    68,    71,    74,    77,    80,
      84,    84,    90,    90,    90,    90,    94,    94,    98,    98,
     103,   103,   103,    59,   124,     0,     0,    25,     0,    18,
      19,    23,    12,    21,    37,    15,    12,     0,    56,     0,
      67,    70,    73,    76,    79,    82,    83,    86,    88,    87,
      89,    93,    92,    97,    96,   100,   101,   102,   122,   121,
     120,   117,    29,    17,     0,    22,    52,     0,     0,     0,
       0,    47,    37,     0,     0,     0,    48,     0,    37,     0,
      14,    13,   106,    64,   123,     0,    31,    18,     0,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    10,    36,
      46,     0,    27,    26,    45,     0,     0,     0,     0,    35,
      54,     0,     0,    29,    30,     0,     0,    52,     0,     0,
       0,     0,     0,    28,     0,    40,     0,    50,    53,     0,
       0,    44,     0,    52,     0,    39,    42,     0,    38,     0,
      49,     0,     0,    43,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,   230,   215,  -194,  -194,    -4,    85,  -194,  -118,
      95,  -194,    93,  -194,  -194,  -194,    27,    18,  -194,   -37,
    -172,  -176,  -194,  -194,  -193,  -194,   -18,   131,   -66,  -194,
      94,  -194,  -194,   134,   182,   141,   175,   145,   174,   140,
     173,   154,   172,   -56,     5,   -48,    35,   -39,    38,   -29,
      52,     8,   -26,  -194,   -21,  -194,    84,  -194,  -194,  -194
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    15,    16,     7,     8,   184,   154,   201,     9,
      60,   118,    20,   153,    10,    61,   114,   206,   223,    11,
     196,   197,   198,   255,   208,   240,   209,    75,    40,   109,
      41,    77,    42,    79,    43,    81,    44,    83,    45,    85,
      46,    87,    47,    90,    48,    95,    49,    98,    50,   101,
      51,   105,    52,    53,    63,    55,   145,   179,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      54,    72,   155,    39,    62,    64,    65,    19,   123,    69,
      70,    71,    67,    68,    22,   210,   214,    54,    12,   227,
      73,   115,   219,     1,     2,     3,   119,   110,   111,    13,
      58,   120,    88,    89,    59,    96,    97,   155,    54,    99,
     100,   116,    18,   143,   246,    54,   144,    14,    73,    21,
     112,   150,    23,    54,   113,    54,   151,   152,   124,    74,
     259,   102,   103,   104,   245,    78,   247,    86,   121,     4,
      91,    92,    93,    94,   165,   166,   140,   141,   142,   106,
     107,   108,   260,   156,   167,   168,   169,   170,    54,    76,
     264,    54,    54,   130,   131,   146,    54,   171,   172,    24,
      25,    26,    27,     1,     2,     3,    80,    28,    29,   173,
     174,   148,   144,    82,    30,    31,    32,    84,   156,    33,
      34,    35,   117,    36,   122,    37,   132,   133,   134,   135,
     147,   202,   149,    54,   136,   137,   199,   157,    24,    25,
      26,    27,    38,     1,     2,     3,    28,    29,   175,   176,
     177,   138,   139,    30,    31,    32,   159,    54,    33,    34,
      35,   178,    36,   180,    37,    54,   181,   182,    59,   205,
     207,    54,   192,   211,   199,   212,   213,    54,   215,   216,
     199,    38,   222,   217,    54,   115,   220,   221,   218,   224,
      54,    54,    54,   226,   225,   228,    54,   229,   230,   232,
     231,   233,   235,   237,   236,   238,   239,   241,   250,   254,
     251,   257,   242,   249,    54,   252,    54,   244,    54,   253,
     256,   248,   258,    17,   263,   261,    24,    25,    26,    27,
       6,   262,    54,   186,    28,    29,   187,   188,   189,   190,
     200,    30,    31,    32,   183,   185,    33,    34,    35,   234,
      36,   243,    37,   203,   158,   126,   127,   128,   129,   160,
     125,     0,   204,     0,     0,     0,   191,   161,   163,    38,
       0,   192,   162,    24,    25,    26,    27,   193,   194,     0,
     195,    28,    29,   164,     0,     0,     0,     0,    30,    31,
      32,     0,     0,    33,    34,    35,     0,    36,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      21,    38,   120,    21,    30,    31,    32,    11,    74,    35,
      36,    37,    33,    34,    18,   187,   192,    38,    56,   212,
      38,    58,   198,     7,     8,     9,    43,    23,    24,     0,
      46,    48,    32,    33,    50,    38,    39,   155,    59,    18,
      19,    59,    20,   109,   237,    66,   112,    59,    66,     6,
      46,   117,     6,    74,    50,    76,    43,    44,    76,    44,
     253,    20,    21,    22,   236,    31,   238,    25,    72,    53,
      34,    35,    36,    37,   130,   131,   102,   103,   104,    40,
      41,    42,   254,   120,   132,   133,   134,   135,   109,    52,
     262,   112,   113,    88,    89,   113,   117,   136,   137,     3,
       4,     5,     6,     7,     8,     9,    30,    11,    12,   138,
     139,   115,   178,    26,    18,    19,    20,    28,   155,    23,
      24,    25,    40,    27,    47,    29,    91,    92,    93,    94,
      47,   157,    51,   154,    96,    97,   154,    47,     3,     4,
       5,     6,    46,     7,     8,     9,    11,    12,   140,   141,
     142,    99,   100,    18,    19,    20,    45,   178,    23,    24,
      25,    44,    27,    47,    29,   186,    51,     6,    50,    50,
       6,   192,    48,    46,   192,    46,    46,   198,    46,    46,
     198,    46,    44,    46,   205,   222,    43,   205,    49,    43,
     211,   212,   213,   211,    14,   213,   217,    49,    12,   217,
      12,    51,    46,    43,    47,    47,    44,    44,    25,    17,
      43,     6,    47,    47,   235,    47,   237,   235,   239,    43,
      43,   239,    43,     8,    43,    47,     3,     4,     5,     6,
       0,    47,   253,    10,    11,    12,    13,    14,    15,    16,
     155,    18,    19,    20,   149,   152,    23,    24,    25,   222,
      27,   233,    29,   159,   123,    80,    82,    84,    86,   125,
      78,    -1,   178,    -1,    -1,    -1,    43,   126,   128,    46,
      -1,    48,   127,     3,     4,     5,     6,    54,    55,    -1,
      57,    11,    12,   129,    -1,    -1,    -1,    -1,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    53,    61,    62,    64,    65,    69,
      74,    79,    56,     0,    59,    62,    63,    63,    20,    66,
      72,     6,    66,     6,     3,     4,     5,     6,    11,    12,
      18,    19,    20,    23,    24,    25,    27,    29,    46,    86,
      88,    90,    92,    94,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   113,   114,   115,   118,   119,    46,    50,
      70,    75,   112,   114,   112,   112,    46,   114,   114,   112,
     112,   112,    79,    86,    44,    87,    52,    91,    31,    93,
      30,    95,    26,    97,    28,    99,    25,   101,    32,    33,
     103,    34,    35,    36,    37,   105,    38,    39,   107,    18,
      19,   109,    20,    21,    22,   111,    40,    41,    42,    89,
      23,    24,    46,    50,    76,    79,    86,    40,    71,    43,
      48,    66,    47,    88,    86,    94,    96,    98,   100,   102,
     104,   104,   106,   106,   106,   106,   108,   108,   110,   110,
     112,   112,   112,    88,    88,   116,    86,    47,    66,    51,
      88,    43,    44,    73,    67,    69,    79,    47,    87,    45,
      93,    95,    97,    99,   101,   103,   103,   105,   105,   105,
     105,   107,   107,   109,   109,   111,   111,   111,    44,   117,
      47,    51,     6,    70,    66,    72,    10,    13,    14,    15,
      16,    43,    48,    54,    55,    57,    80,    81,    82,    86,
      67,    68,   112,    90,   116,    50,    77,     6,    84,    86,
      80,    46,    46,    46,    81,    46,    46,    46,    49,    81,
      43,    86,    44,    78,    43,    14,    86,    84,    86,    49,
      12,    12,    86,    51,    76,    46,    47,    43,    47,    44,
      85,    44,    47,    77,    86,    80,    84,    80,    86,    47,
      25,    43,    47,    43,    17,    83,    43,     6,    43,    84,
      80,    47,    47,    43,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      65,    66,    66,    67,    68,    68,    69,    70,    70,    71,
      71,    72,    73,    73,    74,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    79,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    87,    87,    88,    88,
      89,    89,    89,    90,    91,    91,    92,    93,    93,    94,
      95,    95,    96,    97,    97,    98,    99,    99,   100,   101,
     101,   102,   103,   103,   103,   104,   105,   105,   105,   105,
     105,   106,   107,   107,   107,   108,   109,   109,   109,   110,
     111,   111,   111,   111,   112,   112,   113,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   118,   118,
     119,   119,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     0,     4,     1,     1,
       8,     2,     0,     2,     1,     0,     2,     4,     0,     2,
       0,     5,     2,     1,     5,     3,     5,     0,     4,     0,
       2,     0,     1,     1,     1,     3,     2,     0,     7,     6,
       5,     9,     6,     8,     5,     3,     2,     1,     1,     2,
       0,     1,     0,     2,     0,     2,     3,     0,     1,     3,
       1,     1,     1,     2,     4,     0,     2,     3,     0,     2,
       3,     0,     2,     3,     0,     2,     3,     0,     2,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     3,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     0,     2,
       3,     3,     3,     0,     1,     1,     5,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     4,     2,     2,
       4,     2,     0,     2,     0,     1,     1,     1,     1,     3,
       1,     1,     1
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
#line 90 "sintatico.y" /* yacc.c:1646  */
    {printf("SUCCESSFUL COMPILATION.");}
#line 1478 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 93 "sintatico.y" /* yacc.c:1646  */
    {printf("\nLines: %d", lines);}
#line 1484 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 94 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1490 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1496 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1502 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 101 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1508 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 102 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1514 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1520 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 106 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1526 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 109 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1532 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 110 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1538 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1544 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1550 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1556 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 120 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1562 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 123 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1568 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 124 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1574 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 127 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1580 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 128 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1586 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 131 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1592 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1598 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 135 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1604 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1610 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 141 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1616 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 144 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1622 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 145 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1628 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1634 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1640 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1646 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 153 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1652 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 156 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1658 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 157 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1664 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 158 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1670 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 161 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1676 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 164 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1682 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 165 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1688 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 168 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1694 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 169 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1700 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 170 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1706 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 171 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1712 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 172 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1718 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 173 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1724 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1730 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 175 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1736 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 176 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1742 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 177 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1748 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 178 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1754 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 181 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1760 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 182 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1766 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 185 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1772 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 186 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1778 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 189 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1784 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1790 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 193 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1796 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 196 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1802 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 197 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1808 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 200 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1814 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 201 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1820 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 204 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1826 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 205 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1832 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 206 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1838 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 209 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1844 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 212 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1850 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 213 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1856 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 216 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1862 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 219 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1868 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 220 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1874 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 223 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1880 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 226 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1886 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 227 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1892 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 230 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1898 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 233 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1904 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 234 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1910 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 237 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1916 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 240 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1922 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 241 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1928 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 244 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1934 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 247 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1940 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 248 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1946 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 251 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1952 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 254 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1958 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 255 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1964 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 256 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1970 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 258 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1976 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 261 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1982 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 262 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1988 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 263 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1994 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 264 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2000 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 265 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2006 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 268 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2012 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 271 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2018 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 272 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2024 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 273 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2030 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 276 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2036 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 279 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2042 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 280 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2048 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 281 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2054 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 284 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2060 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 287 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2066 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 288 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2072 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 289 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2078 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 290 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2084 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 293 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2090 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 294 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2096 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 297 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2102 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 300 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2108 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 301 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2114 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 302 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2120 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 303 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2126 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 304 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2132 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 305 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2138 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 306 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2144 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 307 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2150 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 308 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2156 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 311 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2162 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 312 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2168 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 313 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2174 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 314 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2180 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 318 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2186 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 319 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2192 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 322 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2198 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 323 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2204 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 326 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2210 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 327 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2216 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 328 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2222 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 329 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2228 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 330 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2234 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 333 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2240 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 334 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2246 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 335 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2252 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2256 "sintatico.tab.c" /* yacc.c:1646  */
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
