/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: iplookup.i

#define SWIGMODULE iplookup

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static _gostring_ Swig_AllocateString(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)malloc(l);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}


static void Swig_free(void* p) {
  free(p);
}


#include "iplookup.h"
#include "ip.h"
#include "struct.h"
#include "iconv_ext.h"



#include "config.h"


#include <vector>
#include <stdexcept>


#include <string>


#include <stdexcept>


#include <map>
#include <algorithm>
#include <stdexcept>

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_iplookup_cd10677ac3a321f0(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


intgo _wrap_text_iplookup_cd10677ac3a321f0() {
  data_type result;
  intgo _swig_go_result;
  
  
  result = text;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_id_code_iplookup_cd10677ac3a321f0() {
  data_type result;
  intgo _swig_go_result;
  
  
  result = id_code;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_iso_code_iplookup_cd10677ac3a321f0() {
  data_type result;
  intgo _swig_go_result;
  
  
  result = iso_code;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_max_code_iplookup_cd10677ac3a321f0() {
  data_type result;
  intgo _swig_go_result;
  
  
  result = max_code;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


void *_wrap_il_open__SWIG_0_iplookup_cd10677ac3a321f0(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (char *)_swig_go_0.p; 
  
  result = (void *)il_open((char const *)arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


void *_wrap_il_open__SWIG_1_iplookup_cd10677ac3a321f0() {
  void *result = 0 ;
  void *_swig_go_result;
  
  
  result = (void *)il_open();
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


void _wrap_il_close_iplookup_cd10677ac3a321f0(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  il_close(arg1);
  
}


intgo _wrap_il_search__SWIG_0_iplookup_cd10677ac3a321f0(ip *_swig_go_0, _ipinfo *_swig_go_1, void *_swig_go_2) {
  ip arg1 ;
  ipinfo *arg2 = 0 ;
  void *arg3 = (void *) 0 ;
  ip *argp1 ;
  int result;
  intgo _swig_go_result;
  
  
  argp1 = (ip *)_swig_go_0;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null ip");
  }
  arg1 = (ip)*argp1;
  
  arg2 = *(ipinfo **)&_swig_go_1; 
  arg3 = *(void **)&_swig_go_2; 
  
  result = (int)il_search(arg1,*arg2,arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_il_search__SWIG_1_iplookup_cd10677ac3a321f0(ip *_swig_go_0, _ipinfo *_swig_go_1) {
  ip arg1 ;
  ipinfo *arg2 = 0 ;
  ip *argp1 ;
  int result;
  intgo _swig_go_result;
  
  
  argp1 = (ip *)_swig_go_0;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null ip");
  }
  arg1 = (ip)*argp1;
  
  arg2 = *(ipinfo **)&_swig_go_1; 
  
  result = (int)il_search(arg1,*arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


_ipitem *_wrap_il_bin2human_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, _ipitem *_swig_go_1, intgo _swig_go_2) {
  ipinfo *arg1 = 0 ;
  ipitem *arg2 = 0 ;
  data_type arg3 ;
  ipitem *result = 0 ;
  _ipitem *_swig_go_result;
  
  arg1 = *(ipinfo **)&_swig_go_0; 
  arg2 = *(ipitem **)&_swig_go_1; 
  arg3 = (data_type)_swig_go_2; 
  
  result = (ipitem *)il_bin2human((_ipinfo const &)*arg1,*arg2,arg3);
  *(ipitem **)&_swig_go_result = (ipitem *)result; 
  return _swig_go_result;
}


_ipitem *_wrap_il_iplookup__SWIG_0_iplookup_cd10677ac3a321f0(_gostring_ _swig_go_0, _ipitem *_swig_go_1, void *_swig_go_2, intgo _swig_go_3, _gostring_ _swig_go_4) {
  char *arg1 = (char *) 0 ;
  ipitem *arg2 = 0 ;
  void *arg3 = (void *) 0 ;
  data_type arg4 ;
  char *arg5 = (char *) 0 ;
  ipitem *result = 0 ;
  _ipitem *_swig_go_result;
  
  arg1 = (char *)_swig_go_0.p; 
  arg2 = *(ipitem **)&_swig_go_1; 
  arg3 = *(void **)&_swig_go_2; 
  arg4 = (data_type)_swig_go_3; 
  arg5 = (char *)_swig_go_4.p; 
  
  result = (ipitem *)il_iplookup((char const *)arg1,*arg2,arg3,arg4,(char const *)arg5);
  *(ipitem **)&_swig_go_result = (ipitem *)result; 
  return _swig_go_result;
}


_ipitem *_wrap_il_iplookup__SWIG_1_iplookup_cd10677ac3a321f0(_gostring_ _swig_go_0, _ipitem *_swig_go_1, void *_swig_go_2, intgo _swig_go_3) {
  char *arg1 = (char *) 0 ;
  ipitem *arg2 = 0 ;
  void *arg3 = (void *) 0 ;
  data_type arg4 ;
  ipitem *result = 0 ;
  _ipitem *_swig_go_result;
  
  arg1 = (char *)_swig_go_0.p; 
  arg2 = *(ipitem **)&_swig_go_1; 
  arg3 = *(void **)&_swig_go_2; 
  arg4 = (data_type)_swig_go_3; 
  
  result = (ipitem *)il_iplookup((char const *)arg1,*arg2,arg3,arg4);
  *(ipitem **)&_swig_go_result = (ipitem *)result; 
  return _swig_go_result;
}


_ipitem *_wrap_il_iplookup__SWIG_2_iplookup_cd10677ac3a321f0(_gostring_ _swig_go_0, _ipitem *_swig_go_1, void *_swig_go_2) {
  char *arg1 = (char *) 0 ;
  ipitem *arg2 = 0 ;
  void *arg3 = (void *) 0 ;
  ipitem *result = 0 ;
  _ipitem *_swig_go_result;
  
  arg1 = (char *)_swig_go_0.p; 
  arg2 = *(ipitem **)&_swig_go_1; 
  arg3 = *(void **)&_swig_go_2; 
  
  result = (ipitem *)il_iplookup((char const *)arg1,*arg2,arg3);
  *(ipitem **)&_swig_go_result = (ipitem *)result; 
  return _swig_go_result;
}


_ipitem *_wrap_il_iplookup__SWIG_3_iplookup_cd10677ac3a321f0(_gostring_ _swig_go_0, _ipitem *_swig_go_1) {
  char *arg1 = (char *) 0 ;
  ipitem *arg2 = 0 ;
  ipitem *result = 0 ;
  _ipitem *_swig_go_result;
  
  arg1 = (char *)_swig_go_0.p; 
  arg2 = *(ipitem **)&_swig_go_1; 
  
  result = (ipitem *)il_iplookup((char const *)arg1,*arg2);
  *(ipitem **)&_swig_go_result = (ipitem *)result; 
  return _swig_go_result;
}


void _wrap_ip_valid_set_iplookup_cd10677ac3a321f0(intgo _swig_go_0) {
  int arg1 ;
  
  arg1 = (int)_swig_go_0; 
  
  ip::valid = arg1;
  
}


intgo _wrap_ip_valid_get_iplookup_cd10677ac3a321f0() {
  int result;
  intgo _swig_go_result;
  
  
  result = (int)ip::valid;
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_ip_in_set_iplookup_cd10677ac3a321f0(ip *_swig_go_0, in_addr *_swig_go_1) {
  ip *arg1 = (ip *) 0 ;
  ip_type arg2 ;
  ip_type *argp2 ;
  
  arg1 = *(ip **)&_swig_go_0; 
  
  argp2 = (ip_type *)_swig_go_1;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null ip_type");
  }
  arg2 = (ip_type)*argp2;
  
  
  if (arg1) (arg1)->in = arg2;
  
}


in_addr *_wrap_ip_in_get_iplookup_cd10677ac3a321f0(ip *_swig_go_0) {
  ip *arg1 = (ip *) 0 ;
  ip_type result;
  in_addr *_swig_go_result;
  
  arg1 = *(ip **)&_swig_go_0; 
  
  result =  ((arg1)->in);
  *(ip_type **)&_swig_go_result = new ip_type(result); 
  return _swig_go_result;
}


ip *_wrap_new_ip__SWIG_0_iplookup_cd10677ac3a321f0() {
  ip *result = 0 ;
  ip *_swig_go_result;
  
  
  result = (ip *)new ip();
  *(ip **)&_swig_go_result = (ip *)result; 
  return _swig_go_result;
}


ip *_wrap_new_ip__SWIG_1_iplookup_cd10677ac3a321f0(_gostring_ _swig_go_0) {
  std::string *arg1 = 0 ;
  ip *result = 0 ;
  ip *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  result = (ip *)new ip((std::string const &)*arg1);
  *(ip **)&_swig_go_result = (ip *)result; 
  return _swig_go_result;
}


_gostring_ _wrap_ip_ntop_iplookup_cd10677ac3a321f0(ip *_swig_go_0, _gostring_ _swig_go_1) {
  ip *arg1 = (ip *) 0 ;
  char *arg2 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(ip **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  result = (char *)((ip const *)arg1)->ntop(arg2);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


bool _wrap_ip_belong_iplookup_cd10677ac3a321f0(ip *_swig_go_0, ip *_swig_go_1, ip *_swig_go_2) {
  ip *arg1 = (ip *) 0 ;
  ip *arg2 = 0 ;
  ip *arg3 = 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ip **)&_swig_go_0; 
  arg2 = *(ip **)&_swig_go_1; 
  arg3 = *(ip **)&_swig_go_2; 
  
  result = (bool)(arg1)->belong((ip const &)*arg2,(ip const &)*arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_delete_ip_iplookup_cd10677ac3a321f0(ip *_swig_go_0) {
  ip *arg1 = (ip *) 0 ;
  
  arg1 = *(ip **)&_swig_go_0; 
  
  delete arg1;
  
}


_gostring_ _wrap_PACKAGE_URL_iplookup_cd10677ac3a321f0() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = "\0";
  
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_start_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->start, (const char *)arg2, 64-1);
      arg1->start[64-1] = 0;
    } else {
      arg1->start[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_start_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->start);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_end_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->end, (const char *)arg2, 64-1);
      arg1->end[64-1] = 0;
    } else {
      arg1->end[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_end_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->end);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_isp_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->isp, (const char *)arg2, 128-1);
      arg1->isp[128-1] = 0;
    } else {
      arg1->isp[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_isp_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->isp);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_Xtype_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->type, (const char *)arg2, 128-1);
      arg1->type[128-1] = 0;
    } else {
      arg1->type[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_Xtype_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->type);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_country_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->country, (const char *)arg2, 128-1);
      arg1->country[128-1] = 0;
    } else {
      arg1->country[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_country_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->country);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_province_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->province, (const char *)arg2, 128-1);
      arg1->province[128-1] = 0;
    } else {
      arg1->province[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_province_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->province);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_city_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->city, (const char *)arg2, 128-1);
      arg1->city[128-1] = 0;
    } else {
      arg1->city[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_city_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->city);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_district_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->district, (const char *)arg2, 128-1);
      arg1->district[128-1] = 0;
    } else {
      arg1->district[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_district_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->district);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


void _wrap_ipitem_desc_set_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0, _gostring_ _swig_go_1) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->desc, (const char *)arg2, 255-1);
      arg1->desc[255-1] = 0;
    } else {
      arg1->desc[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipitem_desc_get_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->desc);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_ipitem *_wrap_new_ipitem_iplookup_cd10677ac3a321f0() {
  _ipitem *result = 0 ;
  _ipitem *_swig_go_result;
  
  
  result = (_ipitem *)new _ipitem();
  *(_ipitem **)&_swig_go_result = (_ipitem *)result; 
  return _swig_go_result;
}


void _wrap_delete_ipitem_iplookup_cd10677ac3a321f0(_ipitem *_swig_go_0) {
  _ipitem *arg1 = (_ipitem *) 0 ;
  
  arg1 = *(_ipitem **)&_swig_go_0; 
  
  delete arg1;
  
}


void _wrap_ipinfo_start_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, ip *_swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  ip *arg2 = (ip *) 0 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = *(ip **)&_swig_go_1; 
  
  if (arg1) (arg1)->start = *arg2;
  
}


ip *_wrap_ipinfo_start_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  ip *result = 0 ;
  ip *_swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (ip *)& ((arg1)->start);
  *(ip **)&_swig_go_result = (ip *)result; 
  return _swig_go_result;
}


void _wrap_ipinfo_end_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, ip *_swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  ip *arg2 = (ip *) 0 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = *(ip **)&_swig_go_1; 
  
  if (arg1) (arg1)->end = *arg2;
  
}


ip *_wrap_ipinfo_end_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  ip *result = 0 ;
  ip *_swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (ip *)& ((arg1)->end);
  *(ip **)&_swig_go_result = (ip *)result; 
  return _swig_go_result;
}


void _wrap_ipinfo_isp_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, short _swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short arg2 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = (unsigned short)_swig_go_1; 
  
  if (arg1) (arg1)->isp = arg2;
  
}


short _wrap_ipinfo_isp_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short result;
  short _swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (unsigned short) ((arg1)->isp);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_ipinfo_Xtype_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, short _swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short arg2 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = (unsigned short)_swig_go_1; 
  
  if (arg1) (arg1)->type = arg2;
  
}


short _wrap_ipinfo_Xtype_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short result;
  short _swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (unsigned short) ((arg1)->type);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_ipinfo_country_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, short _swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short arg2 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = (unsigned short)_swig_go_1; 
  
  if (arg1) (arg1)->country = arg2;
  
}


short _wrap_ipinfo_country_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short result;
  short _swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (unsigned short) ((arg1)->country);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_ipinfo_province_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, short _swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short arg2 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = (unsigned short)_swig_go_1; 
  
  if (arg1) (arg1)->province = arg2;
  
}


short _wrap_ipinfo_province_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short result;
  short _swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (unsigned short) ((arg1)->province);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_ipinfo_city_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, short _swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short arg2 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = (unsigned short)_swig_go_1; 
  
  if (arg1) (arg1)->city = arg2;
  
}


short _wrap_ipinfo_city_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short result;
  short _swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (unsigned short) ((arg1)->city);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_ipinfo_district_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, short _swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short arg2 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = (unsigned short)_swig_go_1; 
  
  if (arg1) (arg1)->district = arg2;
  
}


short _wrap_ipinfo_district_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  unsigned short result;
  short _swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (unsigned short) ((arg1)->district);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_ipinfo_desc_set_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0, _gostring_ _swig_go_1) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  char *arg2 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  {
    if(arg2) {
      strncpy((char*)arg1->desc, (const char *)arg2, 255-1);
      arg1->desc[255-1] = 0;
    } else {
      arg1->desc[0] = 0;
    }
  }
  
}


_gostring_ _wrap_ipinfo_desc_get_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  result = (char *)(char *) ((arg1)->desc);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_ipinfo *_wrap_new_ipinfo_iplookup_cd10677ac3a321f0() {
  _ipinfo *result = 0 ;
  _ipinfo *_swig_go_result;
  
  
  result = (_ipinfo *)new _ipinfo();
  *(_ipinfo **)&_swig_go_result = (_ipinfo *)result; 
  return _swig_go_result;
}


void _wrap_delete_ipinfo_iplookup_cd10677ac3a321f0(_ipinfo *_swig_go_0) {
  _ipinfo *arg1 = (_ipinfo *) 0 ;
  
  arg1 = *(_ipinfo **)&_swig_go_0; 
  
  delete arg1;
  
}


_gostring_ _wrap_iconv_ext_iplookup_cd10677ac3a321f0(iconv_t *_swig_go_0, _gostring_ _swig_go_1) {
  iconv_t arg1 ;
  char *arg2 = (char *) 0 ;
  iconv_t *argp1 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  argp1 = (iconv_t *)_swig_go_0;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null iconv_t");
  }
  arg1 = (iconv_t)*argp1;
  
  arg2 = (char *)_swig_go_1.p; 
  
  result = (char *)iconv_ext(arg1,arg2);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_itoa_iplookup_cd10677ac3a321f0(intgo _swig_go_0, _gostring_ _swig_go_1) {
  int arg1 ;
  char *arg2 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (char *)_swig_go_1.p; 
  
  result = (char *)itoa(arg1,arg2);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

