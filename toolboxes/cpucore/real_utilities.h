#pragma once

#include "cpucore_defines.h"

#ifdef _USE_MATH_DEFINES
#include <math.h>
#else
#define _USE_MATH_DEFINES
#include <math.h>
#undef _USE_MATH_DEFINES
#endif

#include <float.h>

//
// Get scalar limits of operation
//

template<class T> __inline__ __gad_host__ __gad_device__ T get_min();
template<class T> __inline__ __gad_host__ __gad_device__ T get_max();
template<class T> __inline__ __gad_host__ __gad_device__ T get_epsilon();

//
// Math prototypes
//

template<class REAL> __inline__ __gad_device__ REAL get_pi();

//
// Implementation
//

template<> __inline__ __gad_host__ __gad_device__ float get_min<float>()
{
  return FLT_MIN;
}

template<> __inline__ __gad_host__ __gad_device__ double get_min<double>()
{
  return DBL_MIN;
}

template<> __inline__ __gad_host__ __gad_device__ float get_max<float>()
{
  return FLT_MAX;
}

template<> __inline__ __gad_host__ __gad_device__ double get_max<double>()
{
  return DBL_MAX;
}

template<> __inline__ __gad_host__ __gad_device__ float get_epsilon<float>()
{
  return FLT_EPSILON;
}

template<> __inline__ __gad_host__ __gad_device__ double get_epsilon<double>()
{
  return DBL_EPSILON;
}

template<> __inline__ __gad_host__ __gad_device__ float get_pi(){ return (float)M_PI; }
template<> __inline__ __gad_host__ __gad_device__ double get_pi(){ return M_PI; }

template <typename T> int sgn(T val) {
    return (T(0) < val) - (val < T(0));
}
