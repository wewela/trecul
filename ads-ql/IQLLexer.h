/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : IQL.g
 *     -                            On : 2012-01-31 17:12:39
 *     -                 for the lexer : IQLLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer IQLLexer has the callable functions (rules) shown below,
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
 * a parser context typedef pIQLLexer, which is returned from a call to IQLLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pIQLLexer are  as follows:
 *
 *  -  void      pIQLLexer->T__107(pIQLLexer)
 *  -  void      pIQLLexer->T__108(pIQLLexer)
 *  -  void      pIQLLexer->T__109(pIQLLexer)
 *  -  void      pIQLLexer->T__110(pIQLLexer)
 *  -  void      pIQLLexer->T__111(pIQLLexer)
 *  -  void      pIQLLexer->T__112(pIQLLexer)
 *  -  void      pIQLLexer->T__113(pIQLLexer)
 *  -  void      pIQLLexer->T__114(pIQLLexer)
 *  -  void      pIQLLexer->T__115(pIQLLexer)
 *  -  void      pIQLLexer->T__116(pIQLLexer)
 *  -  void      pIQLLexer->T__117(pIQLLexer)
 *  -  void      pIQLLexer->T__118(pIQLLexer)
 *  -  void      pIQLLexer->T__119(pIQLLexer)
 *  -  void      pIQLLexer->T__120(pIQLLexer)
 *  -  void      pIQLLexer->T__121(pIQLLexer)
 *  -  void      pIQLLexer->T__122(pIQLLexer)
 *  -  void      pIQLLexer->T__123(pIQLLexer)
 *  -  void      pIQLLexer->T__124(pIQLLexer)
 *  -  void      pIQLLexer->T__125(pIQLLexer)
 *  -  void      pIQLLexer->T__126(pIQLLexer)
 *  -  void      pIQLLexer->T__127(pIQLLexer)
 *  -  void      pIQLLexer->T__128(pIQLLexer)
 *  -  void      pIQLLexer->T__129(pIQLLexer)
 *  -  void      pIQLLexer->T__130(pIQLLexer)
 *  -  void      pIQLLexer->T__131(pIQLLexer)
 *  -  void      pIQLLexer->T__132(pIQLLexer)
 *  -  void      pIQLLexer->T__133(pIQLLexer)
 *  -  void      pIQLLexer->TK_ADD(pIQLLexer)
 *  -  void      pIQLLexer->TK_ALL(pIQLLexer)
 *  -  void      pIQLLexer->TK_ALTER(pIQLLexer)
 *  -  void      pIQLLexer->TK_AND(pIQLLexer)
 *  -  void      pIQLLexer->TK_ANY(pIQLLexer)
 *  -  void      pIQLLexer->TK_AS(pIQLLexer)
 *  -  void      pIQLLexer->TK_ASC(pIQLLexer)
 *  -  void      pIQLLexer->TK_AVG(pIQLLexer)
 *  -  void      pIQLLexer->TK_BEGIN(pIQLLexer)
 *  -  void      pIQLLexer->TK_BETWEEN(pIQLLexer)
 *  -  void      pIQLLexer->TK_BIGINT(pIQLLexer)
 *  -  void      pIQLLexer->TK_BOOLEAN(pIQLLexer)
 *  -  void      pIQLLexer->TK_BREAK(pIQLLexer)
 *  -  void      pIQLLexer->TK_BY(pIQLLexer)
 *  -  void      pIQLLexer->TK_CASE(pIQLLexer)
 *  -  void      pIQLLexer->TK_CAST(pIQLLexer)
 *  -  void      pIQLLexer->TK_CHAR(pIQLLexer)
 *  -  void      pIQLLexer->TK_COALESCE(pIQLLexer)
 *  -  void      pIQLLexer->TK_CONTINUE(pIQLLexer)
 *  -  void      pIQLLexer->TK_COUNT(pIQLLexer)
 *  -  void      pIQLLexer->TK_CREATE(pIQLLexer)
 *  -  void      pIQLLexer->TK_CROSS(pIQLLexer)
 *  -  void      pIQLLexer->TK_DATETIME(pIQLLexer)
 *  -  void      pIQLLexer->TK_DECLARE(pIQLLexer)
 *  -  void      pIQLLexer->TK_DECIMAL(pIQLLexer)
 *  -  void      pIQLLexer->TK_DESC(pIQLLexer)
 *  -  void      pIQLLexer->TK_DISTINCT(pIQLLexer)
 *  -  void      pIQLLexer->TK_DOUBLE(pIQLLexer)
 *  -  void      pIQLLexer->TK_ELSE(pIQLLexer)
 *  -  void      pIQLLexer->TK_END(pIQLLexer)
 *  -  void      pIQLLexer->TK_EXISTS(pIQLLexer)
 *  -  void      pIQLLexer->TK_FALSE(pIQLLexer)
 *  -  void      pIQLLexer->TK_FROM(pIQLLexer)
 *  -  void      pIQLLexer->TK_FULL(pIQLLexer)
 *  -  void      pIQLLexer->TK_FUNCTION(pIQLLexer)
 *  -  void      pIQLLexer->TK_GROUP(pIQLLexer)
 *  -  void      pIQLLexer->TK_HAVING(pIQLLexer)
 *  -  void      pIQLLexer->TK_IF(pIQLLexer)
 *  -  void      pIQLLexer->TK_IN(pIQLLexer)
 *  -  void      pIQLLexer->TK_INDEX(pIQLLexer)
 *  -  void      pIQLLexer->TK_INNER(pIQLLexer)
 *  -  void      pIQLLexer->TK_INTO(pIQLLexer)
 *  -  void      pIQLLexer->TK_INTEGER(pIQLLexer)
 *  -  void      pIQLLexer->TK_INTERVAL(pIQLLexer)
 *  -  void      pIQLLexer->TK_IS(pIQLLexer)
 *  -  void      pIQLLexer->TK_JOIN(pIQLLexer)
 *  -  void      pIQLLexer->TK_KEY(pIQLLexer)
 *  -  void      pIQLLexer->TK_LEFT(pIQLLexer)
 *  -  void      pIQLLexer->TK_LIKE(pIQLLexer)
 *  -  void      pIQLLexer->TK_MAX(pIQLLexer)
 *  -  void      pIQLLexer->TK_MIN(pIQLLexer)
 *  -  void      pIQLLexer->TK_NOT(pIQLLexer)
 *  -  void      pIQLLexer->TK_NULL(pIQLLexer)
 *  -  void      pIQLLexer->TK_NVARCHAR(pIQLLexer)
 *  -  void      pIQLLexer->TK_ON(pIQLLexer)
 *  -  void      pIQLLexer->TK_OR(pIQLLexer)
 *  -  void      pIQLLexer->TK_ORDER(pIQLLexer)
 *  -  void      pIQLLexer->TK_OUTER(pIQLLexer)
 *  -  void      pIQLLexer->TK_OUTPUT(pIQLLexer)
 *  -  void      pIQLLexer->TK_PRECISION(pIQLLexer)
 *  -  void      pIQLLexer->TK_PRINT(pIQLLexer)
 *  -  void      pIQLLexer->TK_PROCEDURE(pIQLLexer)
 *  -  void      pIQLLexer->TK_RAISERROR(pIQLLexer)
 *  -  void      pIQLLexer->TK_RETURN(pIQLLexer)
 *  -  void      pIQLLexer->TK_RETURNS(pIQLLexer)
 *  -  void      pIQLLexer->TK_RIGHT(pIQLLexer)
 *  -  void      pIQLLexer->TK_RLIKE(pIQLLexer)
 *  -  void      pIQLLexer->TK_SELECT(pIQLLexer)
 *  -  void      pIQLLexer->TK_SET(pIQLLexer)
 *  -  void      pIQLLexer->TK_SOME(pIQLLexer)
 *  -  void      pIQLLexer->TK_SUM(pIQLLexer)
 *  -  void      pIQLLexer->TK_SWITCH(pIQLLexer)
 *  -  void      pIQLLexer->TK_THEN(pIQLLexer)
 *  -  void      pIQLLexer->TK_TRUE(pIQLLexer)
 *  -  void      pIQLLexer->TK_UNION(pIQLLexer)
 *  -  void      pIQLLexer->TK_VARCHAR(pIQLLexer)
 *  -  void      pIQLLexer->TK_WHEN(pIQLLexer)
 *  -  void      pIQLLexer->TK_WHERE(pIQLLexer)
 *  -  void      pIQLLexer->TK_WHILE(pIQLLexer)
 *  -  void      pIQLLexer->TK_WITH(pIQLLexer)
 *  -  void      pIQLLexer->STRING_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->WSTRING_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->DOUBLE_QUOTED_STRING_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->ESCAPE_SEQUENCE(pIQLLexer)
 *  -  void      pIQLLexer->OCTAL_ESCAPE(pIQLLexer)
 *  -  void      pIQLLexer->HEX_DIGIT(pIQLLexer)
 *  -  void      pIQLLexer->UNICODE_ESCAPE(pIQLLexer)
 *  -  void      pIQLLexer->WS(pIQLLexer)
 *  -  void      pIQLLexer->ML_COMMENT(pIQLLexer)
 *  -  void      pIQLLexer->SL_COMMENT(pIQLLexer)
 *  -  void      pIQLLexer->ID(pIQLLexer)
 *  -  void      pIQLLexer->QUOTED_ID(pIQLLexer)
 *  -  void      pIQLLexer->BIGINT_SUFFIX(pIQLLexer)
 *  -  void      pIQLLexer->HEX_INTEGER_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->DECIMAL_INTEGER_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->DECIMAL_BIGINT_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->FLOATING_POINT_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->EXPONENT(pIQLLexer)
 *  -  void      pIQLLexer->FLOAT_SUFFIX(pIQLLexer)
 *  -  void      pIQLLexer->DECIMAL_LITERAL(pIQLLexer)
 *  -  void      pIQLLexer->Tokens(pIQLLexer)
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

#ifndef	_IQLLexer_H
#define _IQLLexer_H
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
typedef struct IQLLexer_Ctx_struct IQLLexer, * pIQLLexer;



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

/** Context tracking structure for IQLLexer
 */
struct IQLLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mT__107)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__108)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__109)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__110)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__111)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__112)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__113)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__114)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__115)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__116)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__117)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__118)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__119)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__120)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__121)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__122)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__123)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__124)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__125)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__126)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__127)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__128)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__129)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__130)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__131)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__132)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mT__133)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ADD)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ALL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ALTER)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_AND)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ANY)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_AS)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ASC)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_AVG)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_BEGIN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_BETWEEN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_BIGINT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_BOOLEAN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_BREAK)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_BY)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_CASE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_CAST)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_CHAR)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_COALESCE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_CONTINUE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_COUNT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_CREATE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_CROSS)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_DATETIME)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_DECLARE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_DECIMAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_DESC)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_DISTINCT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_DOUBLE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ELSE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_END)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_EXISTS)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_FALSE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_FROM)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_FULL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_FUNCTION)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_GROUP)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_HAVING)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_IF)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_IN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_INDEX)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_INNER)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_INTO)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_INTEGER)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_INTERVAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_IS)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_JOIN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_KEY)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_LEFT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_LIKE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_MAX)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_MIN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_NOT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_NULL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_NVARCHAR)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ON)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_OR)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_ORDER)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_OUTER)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_OUTPUT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_PRECISION)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_PRINT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_PROCEDURE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_RAISERROR)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_RETURN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_RETURNS)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_RIGHT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_RLIKE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_SELECT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_SET)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_SOME)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_SUM)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_SWITCH)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_THEN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_TRUE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_UNION)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_VARCHAR)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_WHEN)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_WHERE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_WHILE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTK_WITH)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mSTRING_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mWSTRING_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mDOUBLE_QUOTED_STRING_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mESCAPE_SEQUENCE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mOCTAL_ESCAPE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mHEX_DIGIT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mUNICODE_ESCAPE)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mWS)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mML_COMMENT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mSL_COMMENT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mID)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mQUOTED_ID)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mBIGINT_SUFFIX)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mHEX_INTEGER_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mDECIMAL_INTEGER_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mDECIMAL_BIGINT_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mFLOATING_POINT_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mEXPONENT)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mFLOAT_SUFFIX)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mDECIMAL_LITERAL)	(struct IQLLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct IQLLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct IQLLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pIQLLexer IQLLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pIQLLexer IQLLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
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

/* End of token definitions for IQLLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
