#ifndef TOKENS_HPP_
#define TOKENS_HPP_

enum tokentype
{
    VOID = 1,
    INT = 2,
    BYTE = 3,
    B = 4,
    BOOL = 5,
    AND = 6,
    OR = 7,
    NOT = 8,
    TRUE = 9,
    FALSE = 10,
    RETURN = 11,
    IF = 12,
    ELSE = 13,
    WHILE = 14,
    BREAK = 15,
    CONTINUE = 16,
    SC = 17,
    COMMA = 18,
    LPAREN = 19,
    RPAREN = 20,
    LBRACE = 21,
    RBRACE = 22,
    ASSIGN = 23,
    RELOP = 24,
    BINOP = 25,
    ID = 26,
    NUM = 27,
    STRING = 28,
    ILEAGAL_CHAR = 30,
    UNCLOSED_STRING = 31,
    ILEAGAL_SEQ = 32,
    ILEGAL_HEX = 33,
    UNCLOSED_COMMENT = 34,
    ERROR = 35
};

extern int yylineno;
extern char *yytext;
extern int yyleng;
extern int yylex();

#endif /* TOKENS_HPP_ */