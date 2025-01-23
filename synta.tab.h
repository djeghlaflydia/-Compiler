
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_for = 258,
     mc_while = 259,
     mc_if = 260,
     mc_else = 261,
     mc_readIn = 262,
     mc_writeIn = 263,
     mc_prog = 264,
     mc_integ = 265,
     mc_real = 266,
     mc_var = 267,
     mc_cst = 268,
     mc_beg = 269,
     mc_endp = 270,
     nb_real = 271,
     nb_integer = 272,
     add = 273,
     subs = 274,
     multi = 275,
     divop = 276,
     aff = 277,
     and = 278,
     or = 279,
     neg = 280,
     supp = 281,
     inf = 282,
     suppeg = 283,
     infeg = 284,
     eg = 285,
     ineg = 286,
     idf = 287,
     chaine = 288,
     po = 289,
     pf = 290,
     acco = 291,
     accf = 292,
     croo = 293,
     crof = 294,
     points = 295,
     pvg = 296,
     vg = 297,
     err = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "synta.y"

    int entier;
    char* str;
    float reel;
    struct {
        char* value; 
        char* type; 
    } chiffre;

    struct {
    	char* type;
    }type;



/* Line 1676 of yacc.c  */
#line 111 "synta.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


