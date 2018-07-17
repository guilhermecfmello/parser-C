%option noyywrap
%{
#include <sintatico.tab.h>

int lines = 1;
int column = 1;
int words = 0;
int chars = 0;
int yylval;

%}
%%





<<EOF>>   { return EOF2; }


%%

int main(int argc,char **argv){
  yylex();
  return 0;
}
