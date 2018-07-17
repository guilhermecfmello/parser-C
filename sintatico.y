%{
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

%}

/* Declaracao de tokens */

%token NUM_HEXA
%token NUM_OCTAL
%token NUM_INTEGER
%token IDENTIFIER
%token VOID
%token INT
%token CHAR
%token RETURN
%token CARACTER
%token STRING
%token DO
%token WHILE
%token FOR
%token IF
%token ELSE
%token PLUS
%token MINUS
%token MULTIPLY
%token DIV
%token REMAINDER
%token INC
%token DEC
%token BITWISE_AND
%token BITWISE_OR
%token BITWISE_NOT
%token BITWISE_XOR
%token NOT
%token LOGICAL_AND
%token LOGICAL_OR
%token EQUAL
%token NOT_EQUAL
%token LESS_THAN
%token GREATER_THAN
%token LESS_EQUAL
%token GREATER_EQUAL
%token R_SHIFT
%token L_SHIFT
%token ASSIGN
%token ADD_ASSIGN
%token MINUS_ASSIGN
%token SEMICOLON
%token COMMA
%token COLON
%token L_PAREN
%token R_PAREN
%token L_CURLY_BRACKET
%token R_CURLY_BRACKET
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token TERNARY_CONDITIONAL
%token NUMBER_SIGN
%token PRINTF
%token SCANF
%token DEFINE
%token EXIT
%token EOL
%token EOF2
/* EXCLUIDOS DO LEXICO ANTERIOR
%token POINTER
%token TYPEDEF
%token STRUCT
%token BREAK
%token SWITCH
%token CASE
%token DEFAULT
*/

%start start_parse


%%

start_parse: programa EOF2 {printf("SUCCESSFUL COMPILATION.");}
;

programa: declaracoes programa1 {printf("\nLines: %d", lines);}
  | funcao programa1 {}
;

programa1: programa {}
  | {}
;

declaracoes: NUMBER_SIGN DEFINE IDENTIFIER expressao {}
  | declaracao_de_variaveis {}
  | declaracao_de_prototipos {}
;

funcao: tipo asterisco IDENTIFIER parametros L_CURLY_BRACKET declara_vars comandos R_CURLY_BRACKET {}
;

asterisco: MULTIPLY asterisco {}
  | {}
;

declara_vars: declaracao_de_variaveis declara_vars2 {}
;

declara_vars2: declara_vars {}
  | {}
;

declaracao_de_variaveis: tipo desvio3 {}
;

desvio1: L_SQUARE_BRACKET expressao R_SQUARE_BRACKET desvio1 {}
  | {}
;

desvio2: ASSIGN expressao_de_atribuicao {}
  | {}
;

desvio3: asterisco IDENTIFIER desvio1 desvio2 desvio4 {}
;

desvio4: COMMA desvio3 {}
  | SEMICOLON {}
;

declaracao_de_prototipos: tipo asterisco IDENTIFIER parametros SEMICOLON {}
;

parametros: L_PAREN par1 R_PAREN {}
;

par1: tipo asterisco IDENTIFIER par2 par3 {}
  | {}
;

par2: L_SQUARE_BRACKET expressao R_SQUARE_BRACKET par2 {}
  | {}
;

par3: COMMA par1 {}
  | {}
;

tipo: INT {}
  | CHAR {}
  | VOID {}
;

bloco: L_CURLY_BRACKET comandos R_CURLY_BRACKET {}
;

comandos: lista_de_comandos comandos {}
  | {}
;

lista_de_comandos: DO bloco WHILE L_PAREN expressao R_PAREN SEMICOLON {}
  | IF L_PAREN expressao R_PAREN bloco lista1 {}
  | WHILE L_PAREN expressao R_PAREN bloco {}
  | FOR L_PAREN lista2 SEMICOLON lista2 SEMICOLON lista2 R_PAREN bloco {}
  | PRINTF L_PAREN STRING lista3 R_PAREN SEMICOLON {}
  | SCANF L_PAREN STRING COMMA BITWISE_AND IDENTIFIER R_PAREN SEMICOLON {}
  | EXIT L_PAREN expressao R_PAREN SEMICOLON {}
  | RETURN lista2 SEMICOLON {}
  | expressao SEMICOLON {}
  | SEMICOLON {}
  | bloco {}
;

lista1: ELSE bloco {}
  | {}
;

lista2: expressao {}
  | {}
;

lista3: COMMA expressao {}
  | {}
;

expressao: expressao_de_atribuicao exp1 {}
;

exp1: COMMA expressao_de_atribuicao exp1 {}
  | {}
;

expressao_de_atribuicao: expressao_condicional {}
  | expressao_unaria exp2 expressao_de_atribuicao {}
;

exp2: ASSIGN {}
  | ADD_ASSIGN {}
  | MINUS_ASSIGN {}
;

expressao_condicional: expressao_or_logico exp3 {}
;

exp3: TERNARY_CONDITIONAL expressao COLON expressao_condicional {}
  | {}
;

expressao_or_logico: expressao_and_logico exp4 {}
;

exp4: LOGICAL_OR expressao_and_logico exp4 {}
  | {}
;

expressao_and_logico: expressao_or exp5 {}
;

exp5: LOGICAL_AND expressao_or exp5 {}
  | {}
;

expressao_or: expressao_xor exp6 {}
;

exp6: BITWISE_OR expressao_xor exp6 {}
  | {}
;

expressao_xor: expressao_and exp7 {}
;

exp7: BITWISE_XOR expressao_and exp7 {}
  | {}
;

expressao_and: expressao_de_igualdade exp8 {}
;

exp8: BITWISE_AND expressao_de_igualdade exp8 {}
  | {}
;

expressao_de_igualdade: expressao_relacional exp9 {}
;

exp9: EQUAL expressao_relacional exp9 {}
  | NOT_EQUAL expressao_relacional exp9 {}
  | {}

expressao_relacional: expressao_shift exp10 {}
;

exp10: LESS_THAN expressao_shift exp10 {}
  | LESS_EQUAL expressao_shift exp10 {}
  | GREATER_THAN expressao_shift exp10 {}
  | GREATER_EQUAL expressao_shift exp10 {}
  | {}
;

expressao_shift: expressao_aditiva exp11 {}
;

exp11: L_SHIFT expressao_aditiva exp11 {}
  | R_SHIFT expressao_aditiva exp11 {}
  | {}
;

expressao_aditiva: expressao_multiplicativa exp12 {}
;

exp12: MINUS expressao_multiplicativa exp12 {}
  | PLUS expressao_multiplicativa exp12 {}
  | {}
;

expressao_multiplicativa: expressao_cast exp13 {}
;

exp13: MULTIPLY expressao_cast exp13 {}
  | DIV expressao_cast exp13 {}
  | REMAINDER expressao_cast exp13 {}
  | {}
;

expressao_cast: exp14 {}
  | expressao_unaria {}
;

exp14: L_PAREN tipo asterisco R_PAREN expressao_cast{}
;

expressao_unaria: expressao_pos_fixa {}
  | INC expressao_unaria {}
  | DEC expressao_unaria {}
  | BITWISE_AND expressao_cast {}
  | MULTIPLY expressao_cast {}
  | PLUS expressao_cast {}
  | MINUS expressao_cast {}
  | BITWISE_NOT expressao_cast {}
  | NOT expressao_cast {}
;

expressao_pos_fixa: expressao_primaria {}
  | expressao_pos_fixa L_SQUARE_BRACKET expressao R_SQUARE_BRACKET {}
  | expressao_pos_fixa INC {}
  | expressao_pos_fixa DEC {}
  | expressao_pos_fixa L_PAREN exp15 R_PAREN
;

exp15: expressao_de_atribuicao exp16 {}
  | {}
;

exp16: COMMA exp15 {}
  | {}
;

expressao_primaria: IDENTIFIER {}
  | numero {}
  | CARACTER {}
  | STRING {}
  | L_PAREN expressao R_PAREN {}
;

numero: NUM_INTEGER {}
  | NUM_HEXA {}
  | NUM_OCTAL {}
;
