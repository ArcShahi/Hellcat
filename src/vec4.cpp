#include <vec4.hpp>
#include <xmmintrin.h>
/*#include <immintrin.h>
#include <smmintrin.h>*/


hct::vec4& operator+=(hct::vec4& a, hct::vec4& b)
{
	_mm_store_ps(&a.x,
		_mm_add_ps(_mm_load_ps(&a.x), _mm_load_ps(&b.x)));
	return a;
}

hct::vec4& operator-=(hct::vec4& a, hct::vec4& b)
{
	_mm_store_ps(&a.x,
		_mm_sub_ps(_mm_load_ps(&a.x), _mm_load_ps(&b.x)));
	return a;
}

hct::vec4 operator+(hct::vec4& a, hct::vec4& b)
{
	return a += b;
}

hct::vec4 operator-(hct::vec4& a, hct::vec4& b)
{
	return a -= b;
}