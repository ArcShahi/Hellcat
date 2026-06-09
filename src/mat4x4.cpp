#include <mat4x4.hpp>
#include <array>
#include <immintrin.h>

// TODO : Bench against : mat4x4& 
hct::mat4x4 scale(float x,hct::mat4x4 m)
{	
	__m256 s = _mm256_set1_ps(x);
	
	_mm256_storeu_ps(&m.value[0].x,
     _mm256_mul_ps(_mm256_loadu_ps(&m.value[0].x),s));

	_mm256_storeu_ps(&m.value[2].x,
     _mm256_mul_ps(_mm256_loadu_ps(&m.value[2].x),s));

	return m;
}

