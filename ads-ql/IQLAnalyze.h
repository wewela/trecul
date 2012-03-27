/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : IQLAnalyze.g
 *     -                            On : 2012-01-31 17:12:56
 *     -           for the tree parser : IQLAnalyzeTreeParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The tree parser IQLAnalyze has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pIQLAnalyze, which is returned from a call to IQLAnalyzeNew().
 *
 * The methods in pIQLAnalyze are  as follows:
 *
 *  - IQLAnalyze_singleExpression_return      pIQLAnalyze->singleExpression(pIQLAnalyze)
 *  - IQLAnalyze_declareStatement_return      pIQLAnalyze->declareStatement(pIQLAnalyze)
 *  - IQLAnalyze_returnExpression_return      pIQLAnalyze->returnExpression(pIQLAnalyze)
 *  - IQLAnalyze_program_return      pIQLAnalyze->program(pIQLAnalyze)
 *  - IQLAnalyze_returnsDecl_return      pIQLAnalyze->returnsDecl(pIQLAnalyze)
 *  - IQLAnalyze_localVarOrId_return      pIQLAnalyze->localVarOrId(pIQLAnalyze)
 *  - IQLAnalyze_programArgDecl_return      pIQLAnalyze->programArgDecl(pIQLAnalyze)
 *  - IQLAnalyze_statement_return      pIQLAnalyze->statement(pIQLAnalyze)
 *  - IQLAnalyze_variableDeclaration_return      pIQLAnalyze->variableDeclaration(pIQLAnalyze)
 *  - IQLAnalyze_builtInType_return      pIQLAnalyze->builtInType(pIQLAnalyze)
 *  - IQLAnalyze_typeNullability_return      pIQLAnalyze->typeNullability(pIQLAnalyze)
 *  - IQLAnalyze_setStatement_return      pIQLAnalyze->setStatement(pIQLAnalyze)
 *  - IQLAnalyze_variableReference_return      pIQLAnalyze->variableReference(pIQLAnalyze)
 *  - IQLAnalyze_switchStatement_return      pIQLAnalyze->switchStatement(pIQLAnalyze)
 *  - IQLAnalyze_switchBlock_return      pIQLAnalyze->switchBlock(pIQLAnalyze)
 *  - IQLAnalyze_printStatement_return      pIQLAnalyze->printStatement(pIQLAnalyze)
 *  - IQLAnalyze_ifStatement_return      pIQLAnalyze->ifStatement(pIQLAnalyze)
 *  - IQLAnalyze_statementBlock_return      pIQLAnalyze->statementBlock(pIQLAnalyze)
 *  - IQLAnalyze_whileStatement_return      pIQLAnalyze->whileStatement(pIQLAnalyze)
 *  - IQLAnalyze_expression_return      pIQLAnalyze->expression(pIQLAnalyze)
 *  - IQLAnalyze_whenExpression_return      pIQLAnalyze->whenExpression(pIQLAnalyze)
 *  - IQLAnalyze_elseExpression_return      pIQLAnalyze->elseExpression(pIQLAnalyze)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_IQLAnalyze_H
#define _IQLAnalyze_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct IQLAnalyze_Ctx_struct IQLAnalyze, * pIQLAnalyze;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct IQLAnalyze_singleExpression_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_singleExpression_return;

typedef struct IQLAnalyze_declareStatement_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_declareStatement_return;

typedef struct IQLAnalyze_returnExpression_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_returnExpression_return;

typedef struct IQLAnalyze_program_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_program_return;

typedef struct IQLAnalyze_returnsDecl_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_returnsDecl_return;

typedef struct IQLAnalyze_localVarOrId_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_localVarOrId_return;

typedef struct IQLAnalyze_programArgDecl_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_programArgDecl_return;

typedef struct IQLAnalyze_statement_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_statement_return;

typedef struct IQLAnalyze_variableDeclaration_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_variableDeclaration_return;

typedef struct IQLAnalyze_builtInType_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_builtInType_return;

typedef struct IQLAnalyze_typeNullability_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_typeNullability_return;

typedef struct IQLAnalyze_setStatement_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_setStatement_return;

typedef struct IQLAnalyze_variableReference_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_variableReference_return;

typedef struct IQLAnalyze_switchStatement_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_switchStatement_return;

typedef struct IQLAnalyze_switchBlock_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_switchBlock_return;

typedef struct IQLAnalyze_printStatement_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_printStatement_return;

typedef struct IQLAnalyze_ifStatement_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_ifStatement_return;

typedef struct IQLAnalyze_statementBlock_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_statementBlock_return;

typedef struct IQLAnalyze_whileStatement_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_whileStatement_return;

typedef struct IQLAnalyze_expression_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_expression_return;

typedef struct IQLAnalyze_whenExpression_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_whenExpression_return;

typedef struct IQLAnalyze_elseExpression_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;
    pANTLR3_BASE_TREE	tree;
   
}
    IQLAnalyze_elseExpression_return;



/** Context tracking structure for IQLAnalyze
 */
struct IQLAnalyze_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_TREE_PARSER	    pTreeParser;


     IQLAnalyze_singleExpression_return (*singleExpression)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_declareStatement_return (*declareStatement)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_returnExpression_return (*returnExpression)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_program_return (*program)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_returnsDecl_return (*returnsDecl)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_localVarOrId_return (*localVarOrId)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_programArgDecl_return (*programArgDecl)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_statement_return (*statement)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_variableDeclaration_return (*variableDeclaration)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_builtInType_return (*builtInType)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_typeNullability_return (*typeNullability)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_setStatement_return (*setStatement)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_variableReference_return (*variableReference)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_switchStatement_return (*switchStatement)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_switchBlock_return (*switchBlock)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_printStatement_return (*printStatement)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_ifStatement_return (*ifStatement)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_statementBlock_return (*statementBlock)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_whileStatement_return (*whileStatement)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_expression_return (*expression)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_whenExpression_return (*whenExpression)	(struct IQLAnalyze_Ctx_struct * ctx);
     IQLAnalyze_elseExpression_return (*elseExpression)	(struct IQLAnalyze_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct IQLAnalyze_Ctx_struct * ctx);
    /* @headerFile.members() */
    pANTLR3_BASE_TREE_ADAPTOR	adaptor;
    pANTLR3_VECTOR_FACTORY		vectors;
    /* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pIQLAnalyze IQLAnalyzeNew         (pANTLR3_COMMON_TREE_NODE_STREAM instream);
ANTLR3_API pIQLAnalyze IQLAnalyzeNewSSD      (pANTLR3_COMMON_TREE_NODE_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the tree parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define TK_AS      12
#define TK_ELSE      42
#define EXPONENT      105
#define FLOAT_SUFFIX      106
#define TK_IN      81
#define TK_JOIN      85
#define TK_IF      41
#define HEX_INTEGER_LITERAL      57
#define TK_DESC      74
#define DOUBLE_QUOTED_STRING_LITERAL      10
#define TK_LIKE      47
#define TK_INTO      84
#define TK_SUM      49
#define EOF      -1
#define TK_IS      46
#define TK_RETURNS      17
#define TK_NOT      34
#define STRING_LITERAL      56
#define TK_WITH      96
#define TK_ANY      66
#define FLOATING_POINT_LITERAL      58
#define BIGINT_SUFFIX      104
#define TK_HAVING      80
#define TK_BEGIN      37
#define TK_ORDER      89
#define TK_PRECISION      25
#define TK_FROM      77
#define TK_SWITCH      36
#define TK_ON      88
#define TK_OR      44
#define TK_TRUE      61
#define TK_MAX      50
#define TK_BREAK      20
#define TK_COUNT      72
#define TK_KEY      86
#define OCTAL_ESCAPE      99
#define TK_BETWEEN      69
#define TK_UNION      94
#define T__126      126
#define T__125      125
#define T__128      128
#define T__127      127
#define WS      101
#define T__129      129
#define TK_EXISTS      76
#define TK_LEFT      87
#define TK_WHEN      52
#define SL_COMMENT      103
#define TK_GROUP      79
#define TK_CAST      55
#define DECIMAL_BIGINT_LITERAL      7
#define TK_RIGHT      91
#define TK_CREATE      14
#define DECIMAL_INTEGER_LITERAL      9
#define T__130      130
#define TK_NULL      33
#define T__131      131
#define DECIMAL_LITERAL      59
#define T__132      132
#define T__133      133
#define TK_BOOLEAN      30
#define TK_WHERE      95
#define T__118      118
#define TK_FUNCTION      16
#define T__119      119
#define T__116      116
#define T__117      117
#define T__114      114
#define T__115      115
#define T__124      124
#define T__123      123
#define TK_END      38
#define T__122      122
#define TK_INTERVAL      54
#define T__121      121
#define T__120      120
#define LITERAL_CAST      5
#define TK_SELECT      92
#define ID      8
#define QUOTED_ID      13
#define TK_CHAR      26
#define ML_COMMENT      102
#define ESCAPE_SEQUENCE      97
#define TK_ASC      67
#define UNICODE_ESCAPE      98
#define TK_NVARCHAR      28
#define TK_WHILE      43
#define T__107      107
#define T__108      108
#define T__109      109
#define TK_FALSE      62
#define T__111      111
#define T__110      110
#define T__113      113
#define T__112      112
#define TK_FULL      78
#define TK_DOUBLE      24
#define TK_AND      45
#define TK_COALESCE      71
#define TK_AVG      68
#define TK_INNER      83
#define TK_INTEGER      23
#define TK_ALTER      65
#define TK_RAISERROR      22
#define TK_THEN      53
#define TK_PROCEDURE      15
#define HEX_DIGIT      100
#define TK_CROSS      73
#define DATETIME_LITERAL      6
#define TK_VARCHAR      27
#define TK_MIN      51
#define TK_INDEX      82
#define TK_RLIKE      48
#define WSTRING_LITERAL      60
#define TK_ALL      64
#define TK_DATETIME      31
#define TK_RETURN      19
#define TK_OUTER      90
#define TK_BIGINT      32
#define CASE_NO_ELSE      4
#define TK_DISTINCT      75
#define TK_SOME      93
#define TK_PRINT      40
#define TK_CONTINUE      21
#define TK_DECLARE      11
#define TK_BY      70
#define TK_OUTPUT      18
#define TK_DECIMAL      29
#define TK_SET      35
#define TK_ADD      63
#define TK_CASE      39
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for IQLAnalyze
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
