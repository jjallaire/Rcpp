// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// preprocessor_generated.h: Rcpp R/C++ interface class library -- pre processor help
//
// Copyright (C) 2010 Dirk Eddelbuettel and Romain Francois
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

#ifndef RCPP__PREPROCESSOR_GENERATED_H
#define RCPP__PREPROCESSOR_GENERATED_H

// {{{ RCPP_FUNCTION 


#define RCPP_FUNCTION_0(__OUT__,__NAME__)  \
__OUT__ RCPP_DECORATE(__NAME__)() ;     \
extern "C" SEXP __NAME__(){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)() ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)()

#define RCPP_FUNCTION_1(__OUT__,__NAME__, ___0)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0) ;     \
extern "C" SEXP __NAME__(SEXP x0){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0)

#define RCPP_FUNCTION_2(__OUT__,__NAME__, ___0, ___1)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1)

#define RCPP_FUNCTION_3(__OUT__,__NAME__, ___0, ___1, ___2)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2)

#define RCPP_FUNCTION_4(__OUT__,__NAME__, ___0, ___1, ___2, ___3)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3)

#define RCPP_FUNCTION_5(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4)

#define RCPP_FUNCTION_6(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5)

#define RCPP_FUNCTION_7(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6)

#define RCPP_FUNCTION_8(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7)

#define RCPP_FUNCTION_9(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8)

#define RCPP_FUNCTION_10(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9)

#define RCPP_FUNCTION_11(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10)

#define RCPP_FUNCTION_12(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11)

#define RCPP_FUNCTION_13(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12)

#define RCPP_FUNCTION_14(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13)

#define RCPP_FUNCTION_15(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14)

#define RCPP_FUNCTION_16(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15)

#define RCPP_FUNCTION_17(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16)

#define RCPP_FUNCTION_18(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17)

#define RCPP_FUNCTION_19(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18)

#define RCPP_FUNCTION_20(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19)

#define RCPP_FUNCTION_21(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20)

#define RCPP_FUNCTION_22(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21)

#define RCPP_FUNCTION_23(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22)

#define RCPP_FUNCTION_24(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23)

#define RCPP_FUNCTION_25(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24)

#define RCPP_FUNCTION_26(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25)

#define RCPP_FUNCTION_27(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26)

#define RCPP_FUNCTION_28(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27)

#define RCPP_FUNCTION_29(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28)

#define RCPP_FUNCTION_30(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29)

#define RCPP_FUNCTION_31(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30)

#define RCPP_FUNCTION_32(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31)

#define RCPP_FUNCTION_33(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32)

#define RCPP_FUNCTION_34(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33)

#define RCPP_FUNCTION_35(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34)

#define RCPP_FUNCTION_36(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35)

#define RCPP_FUNCTION_37(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36)

#define RCPP_FUNCTION_38(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37)

#define RCPP_FUNCTION_39(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38)

#define RCPP_FUNCTION_40(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39)

#define RCPP_FUNCTION_41(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40)

#define RCPP_FUNCTION_42(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41)

#define RCPP_FUNCTION_43(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42)

#define RCPP_FUNCTION_44(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43)

#define RCPP_FUNCTION_45(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44)

#define RCPP_FUNCTION_46(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45)

#define RCPP_FUNCTION_47(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46)

#define RCPP_FUNCTION_48(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47)

#define RCPP_FUNCTION_49(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48)

#define RCPP_FUNCTION_50(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49)

#define RCPP_FUNCTION_51(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50)

#define RCPP_FUNCTION_52(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51)

#define RCPP_FUNCTION_53(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52)

#define RCPP_FUNCTION_54(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53)

#define RCPP_FUNCTION_55(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54)

#define RCPP_FUNCTION_56(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55)

#define RCPP_FUNCTION_57(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56)

#define RCPP_FUNCTION_58(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57)

#define RCPP_FUNCTION_59(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58)

#define RCPP_FUNCTION_60(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59)

#define RCPP_FUNCTION_61(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60)

#define RCPP_FUNCTION_62(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61)

#define RCPP_FUNCTION_63(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61, SEXP x62){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 ), ::Rcpp::internal::converter( x62 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62)

#define RCPP_FUNCTION_64(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61, SEXP x62, SEXP x63){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 ), ::Rcpp::internal::converter( x62 ), ::Rcpp::internal::converter( x63 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63)

#define RCPP_FUNCTION_65(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63, ___64)  \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63, ___64) ;     \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61, SEXP x62, SEXP x63, SEXP x64){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 ), ::Rcpp::internal::converter( x62 ), ::Rcpp::internal::converter( x63 ), ::Rcpp::internal::converter( x64 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63, ___64)

// }}}

// {{{ RCPP_FUNCTION_NODECL


#define RCPP_FUNCTION_NODECL_0(__OUT__,__NAME__)  \
extern "C" SEXP __NAME__(){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)() ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)()

#define RCPP_FUNCTION_NODECL_1(__OUT__,__NAME__, ___0)  \
extern "C" SEXP __NAME__(SEXP x0){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0)

#define RCPP_FUNCTION_NODECL_2(__OUT__,__NAME__, ___0, ___1)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1)

#define RCPP_FUNCTION_NODECL_3(__OUT__,__NAME__, ___0, ___1, ___2)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2)

#define RCPP_FUNCTION_NODECL_4(__OUT__,__NAME__, ___0, ___1, ___2, ___3)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3)

#define RCPP_FUNCTION_NODECL_5(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4)

#define RCPP_FUNCTION_NODECL_6(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5)

#define RCPP_FUNCTION_NODECL_7(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6)

#define RCPP_FUNCTION_NODECL_8(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7)

#define RCPP_FUNCTION_NODECL_9(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8)

#define RCPP_FUNCTION_NODECL_10(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9)

#define RCPP_FUNCTION_NODECL_11(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10)

#define RCPP_FUNCTION_NODECL_12(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11)

#define RCPP_FUNCTION_NODECL_13(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12)

#define RCPP_FUNCTION_NODECL_14(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13)

#define RCPP_FUNCTION_NODECL_15(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14)

#define RCPP_FUNCTION_NODECL_16(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15)

#define RCPP_FUNCTION_NODECL_17(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16)

#define RCPP_FUNCTION_NODECL_18(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17)

#define RCPP_FUNCTION_NODECL_19(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18)

#define RCPP_FUNCTION_NODECL_20(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19)

#define RCPP_FUNCTION_NODECL_21(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20)

#define RCPP_FUNCTION_NODECL_22(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21)

#define RCPP_FUNCTION_NODECL_23(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22)

#define RCPP_FUNCTION_NODECL_24(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23)

#define RCPP_FUNCTION_NODECL_25(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24)

#define RCPP_FUNCTION_NODECL_26(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25)

#define RCPP_FUNCTION_NODECL_27(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26)

#define RCPP_FUNCTION_NODECL_28(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27)

#define RCPP_FUNCTION_NODECL_29(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28)

#define RCPP_FUNCTION_NODECL_30(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29)

#define RCPP_FUNCTION_NODECL_31(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30)

#define RCPP_FUNCTION_NODECL_32(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31)

#define RCPP_FUNCTION_NODECL_33(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32)

#define RCPP_FUNCTION_NODECL_34(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33)

#define RCPP_FUNCTION_NODECL_35(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34)

#define RCPP_FUNCTION_NODECL_36(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35)

#define RCPP_FUNCTION_NODECL_37(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36)

#define RCPP_FUNCTION_NODECL_38(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37)

#define RCPP_FUNCTION_NODECL_39(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38)

#define RCPP_FUNCTION_NODECL_40(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39)

#define RCPP_FUNCTION_NODECL_41(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40)

#define RCPP_FUNCTION_NODECL_42(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41)

#define RCPP_FUNCTION_NODECL_43(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42)

#define RCPP_FUNCTION_NODECL_44(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43)

#define RCPP_FUNCTION_NODECL_45(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44)

#define RCPP_FUNCTION_NODECL_46(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45)

#define RCPP_FUNCTION_NODECL_47(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46)

#define RCPP_FUNCTION_NODECL_48(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47)

#define RCPP_FUNCTION_NODECL_49(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48)

#define RCPP_FUNCTION_NODECL_50(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49)

#define RCPP_FUNCTION_NODECL_51(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50)

#define RCPP_FUNCTION_NODECL_52(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51)

#define RCPP_FUNCTION_NODECL_53(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52)

#define RCPP_FUNCTION_NODECL_54(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53)

#define RCPP_FUNCTION_NODECL_55(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54)

#define RCPP_FUNCTION_NODECL_56(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55)

#define RCPP_FUNCTION_NODECL_57(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56)

#define RCPP_FUNCTION_NODECL_58(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57)

#define RCPP_FUNCTION_NODECL_59(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58)

#define RCPP_FUNCTION_NODECL_60(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59)

#define RCPP_FUNCTION_NODECL_61(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60)

#define RCPP_FUNCTION_NODECL_62(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61)

#define RCPP_FUNCTION_NODECL_63(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61, SEXP x62){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 ), ::Rcpp::internal::converter( x62 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62)

#define RCPP_FUNCTION_NODECL_64(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61, SEXP x62, SEXP x63){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 ), ::Rcpp::internal::converter( x62 ), ::Rcpp::internal::converter( x63 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63)

#define RCPP_FUNCTION_NODECL_65(__OUT__,__NAME__, ___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63, ___64)  \
extern "C" SEXP __NAME__(SEXP x0, SEXP x1, SEXP x2, SEXP x3, SEXP x4, SEXP x5, SEXP x6, SEXP x7, SEXP x8, SEXP x9, SEXP x10, SEXP x11, SEXP x12, SEXP x13, SEXP x14, SEXP x15, SEXP x16, SEXP x17, SEXP x18, SEXP x19, SEXP x20, SEXP x21, SEXP x22, SEXP x23, SEXP x24, SEXP x25, SEXP x26, SEXP x27, SEXP x28, SEXP x29, SEXP x30, SEXP x31, SEXP x32, SEXP x33, SEXP x34, SEXP x35, SEXP x36, SEXP x37, SEXP x38, SEXP x39, SEXP x40, SEXP x41, SEXP x42, SEXP x43, SEXP x44, SEXP x45, SEXP x46, SEXP x47, SEXP x48, SEXP x49, SEXP x50, SEXP x51, SEXP x52, SEXP x53, SEXP x54, SEXP x55, SEXP x56, SEXP x57, SEXP x58, SEXP x59, SEXP x60, SEXP x61, SEXP x62, SEXP x63, SEXP x64){          \
SEXP res = R_NilValue ;                 \
try{                                    \
	res = ::Rcpp::wrap( RCPP_DECORATE(__NAME__)(::Rcpp::internal::converter( x0 ), ::Rcpp::internal::converter( x1 ), ::Rcpp::internal::converter( x2 ), ::Rcpp::internal::converter( x3 ), ::Rcpp::internal::converter( x4 ), ::Rcpp::internal::converter( x5 ), ::Rcpp::internal::converter( x6 ), ::Rcpp::internal::converter( x7 ), ::Rcpp::internal::converter( x8 ), ::Rcpp::internal::converter( x9 ), ::Rcpp::internal::converter( x10 ), ::Rcpp::internal::converter( x11 ), ::Rcpp::internal::converter( x12 ), ::Rcpp::internal::converter( x13 ), ::Rcpp::internal::converter( x14 ), ::Rcpp::internal::converter( x15 ), ::Rcpp::internal::converter( x16 ), ::Rcpp::internal::converter( x17 ), ::Rcpp::internal::converter( x18 ), ::Rcpp::internal::converter( x19 ), ::Rcpp::internal::converter( x20 ), ::Rcpp::internal::converter( x21 ), ::Rcpp::internal::converter( x22 ), ::Rcpp::internal::converter( x23 ), ::Rcpp::internal::converter( x24 ), ::Rcpp::internal::converter( x25 ), ::Rcpp::internal::converter( x26 ), ::Rcpp::internal::converter( x27 ), ::Rcpp::internal::converter( x28 ), ::Rcpp::internal::converter( x29 ), ::Rcpp::internal::converter( x30 ), ::Rcpp::internal::converter( x31 ), ::Rcpp::internal::converter( x32 ), ::Rcpp::internal::converter( x33 ), ::Rcpp::internal::converter( x34 ), ::Rcpp::internal::converter( x35 ), ::Rcpp::internal::converter( x36 ), ::Rcpp::internal::converter( x37 ), ::Rcpp::internal::converter( x38 ), ::Rcpp::internal::converter( x39 ), ::Rcpp::internal::converter( x40 ), ::Rcpp::internal::converter( x41 ), ::Rcpp::internal::converter( x42 ), ::Rcpp::internal::converter( x43 ), ::Rcpp::internal::converter( x44 ), ::Rcpp::internal::converter( x45 ), ::Rcpp::internal::converter( x46 ), ::Rcpp::internal::converter( x47 ), ::Rcpp::internal::converter( x48 ), ::Rcpp::internal::converter( x49 ), ::Rcpp::internal::converter( x50 ), ::Rcpp::internal::converter( x51 ), ::Rcpp::internal::converter( x52 ), ::Rcpp::internal::converter( x53 ), ::Rcpp::internal::converter( x54 ), ::Rcpp::internal::converter( x55 ), ::Rcpp::internal::converter( x56 ), ::Rcpp::internal::converter( x57 ), ::Rcpp::internal::converter( x58 ), ::Rcpp::internal::converter( x59 ), ::Rcpp::internal::converter( x60 ), ::Rcpp::internal::converter( x61 ), ::Rcpp::internal::converter( x62 ), ::Rcpp::internal::converter( x63 ), ::Rcpp::internal::converter( x64 )) ) ; \
} catch( std::exception& __ex__ ){      \
	forward_exception_to_r( __ex__ ) ;  \
}                                       \
return res ;                            \
}                                       \
__OUT__ RCPP_DECORATE(__NAME__)(___0, ___1, ___2, ___3, ___4, ___5, ___6, ___7, ___8, ___9, ___10, ___11, ___12, ___13, ___14, ___15, ___16, ___17, ___18, ___19, ___20, ___21, ___22, ___23, ___24, ___25, ___26, ___27, ___28, ___29, ___30, ___31, ___32, ___33, ___34, ___35, ___36, ___37, ___38, ___39, ___40, ___41, ___42, ___43, ___44, ___45, ___46, ___47, ___48, ___49, ___50, ___51, ___52, ___53, ___54, ___55, ___56, ___57, ___58, ___59, ___60, ___61, ___62, ___63, ___64)

// }}}
#endif
