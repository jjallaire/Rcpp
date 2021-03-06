// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-
//
// RcppCommon.h: Rcpp R/C++ interface class library -- common include and defines statements
//
// Copyright (C) 2008 - 2009 Dirk Eddelbuettel
// Copyright (C) 2009 - 2012 Dirk Eddelbuettel and Romain Francois
//
// This file is part of Rcpp.
//
// Rcpp is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Rcpp.  If not, see <http://www.gnu.org/licenses/>.

#ifndef RcppCommon_h
#define RcppCommon_h

#include <Rcpp/platform/compiler.h>
#include <Rcpp/config.h>
#include <Rcpp/macros/macros.h>

// include R headers, but set R_NO_REMAP and access everything via Rf_ prefixes
#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>
#include <R_ext/Complex.h>
#include <R_ext/Parse.h>
#include <R_ext/Rdynload.h>
#include <Rversion.h>

/**
 * \brief Rcpp API
 */
namespace Rcpp{

    /**
     * \brief traits used to dispatch wrap
     */
    namespace traits{
    } // traits

    /**
     * \brief internal implementation details
     */
    namespace internal{     
    } // internal 
} // Rcpp

#include <iterator>
#include <exception>
#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <set>
#include <stdexcept>
#include <vector>
#include <deque>
#include <functional>
#include <numeric>
#include <algorithm>
#include <complex>
#include <limits>
#include <typeinfo>
#include <Rcpp/sprintf.h>


#include <Rcpp/lang.h>
#include <Rcpp/complex.h>
#include <Rcpp/barrier.h>

#define RcppExport extern "C"

#include <Rcpp/exceptions.h>

namespace Rcpp{
    template <typename T> class object ;
    class String ;
	namespace internal{
		template <typename Class> SEXP make_new_object( Class* ptr ) ;	
	}
}	

#include <Rcpp/traits/traits.h>
#include <Rcpp/Named.h>

#include <Rcpp/internal/caster.h>
#include <Rcpp/internal/r_vector.h>
#include <Rcpp/r_cast.h>

#include <Rcpp/api/bones/bones.h>

#include <Rcpp/internal/export.h>
#include <Rcpp/internal/r_coerce.h>
#include <Rcpp/as.h>

#include <Rcpp/vector/VectorBase.h>
#include <Rcpp/vector/MatrixBase.h>

#include <Rcpp/internal/wrap.h>

#include <Rcpp/internal/ListInitialization.h>
#include <Rcpp/internal/Proxy_Iterator.h>
#include <Rcpp/internal/SEXP_Iterator.h>
#include <Rcpp/internal/converter.h>

#include <Rcpp/algo.h>

#include <Rcpp/sugar/sugar_forward.h>

#include <Rcpp/cache.h>

// "Rcout" iostream class contributed by Jelmer Ypma
#include <Rcpp/iostream/Rstreambuf.h>
#include <Rcpp/iostream/Rostream.h>

#endif
