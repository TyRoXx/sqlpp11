/*
 * Copyright (c) 2013-2015, Roland Bock
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 *   Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * 
 *   Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SQLPP_WORKAROUND_H
#define SQLPP_WORKAROUND_H

//TODO: consider using Boost for this stuff
#ifdef _MSC_VER
#	define SQLPP_CONSTEXPR_OR_CONST const
#	define SQLPP_CONSTEXPR
#else
#	define SQLPP_CONSTEXPR_OR_CONST constexpr
#	define SQLPP_CONSTEXPR constexpr
#endif

#ifdef _MSC_VER
#	define SQLPP_HAS_INLINE_NAMESPACE 0
#else
#	define SQLPP_HAS_INLINE_NAMESPACE 1
#endif

#ifdef _MSC_VER
#	define SQLPP_HAS_DEFAULTED_MOVE_METHODS 0
#else
#	define SQLPP_HAS_DEFAULTED_MOVE_METHODS 1
#endif

#endif
