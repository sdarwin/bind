#ifndef BOOST_BIND_PLACEHOLDERS_HPP_INCLUDED
#define BOOST_BIND_PLACEHOLDERS_HPP_INCLUDED

#if _MSC_VER >= 1020
#pragma once
#endif

//
//  bind/placeholders.hpp - _N definitions
//
//  Copyright (c) 2002 Peter Dimov and Multi Media Ltd.
//
//  Permission to copy, use, modify, sell and distribute this software
//  is granted provided this copyright notice appears in all copies.
//  This software is provided "as is" without express or implied
//  warranty, and with no claim as to its suitability for any purpose.
//
//  See http://www.boost.org/libs/bind/bind.html for documentation.
//

#include <boost/bind/arg.hpp>

namespace
{

static inline boost::arg<1> _1() { return boost::arg<1>(); }
static inline boost::arg<2> _2() { return boost::arg<2>(); }
static inline boost::arg<3> _3() { return boost::arg<3>(); }
static inline boost::arg<4> _4() { return boost::arg<4>(); }
static inline boost::arg<5> _5() { return boost::arg<5>(); }
static inline boost::arg<6> _6() { return boost::arg<6>(); }
static inline boost::arg<7> _7() { return boost::arg<7>(); }
static inline boost::arg<8> _8() { return boost::arg<8>(); }
static inline boost::arg<9> _9() { return boost::arg<9>(); }

} // unnamed namespace

#endif // #ifndef BOOST_BIND_PLACEHOLDERS_HPP_INCLUDED
