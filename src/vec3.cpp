#include <vec3.hpp>
#include <xmmintrin.h>
#include <immintrin.h>
#include <smmintrin.h>

hct::vec3& operator+=(hct::vec3& a, hct::vec3& b)
{
	_mm_store_ps(&a.x,
		_mm_add_ps(_mm_load_ps(&a.x), _mm_load_ps(&b.x)));
	return a;
}

hct::vec3& operator-=(hct::vec3& a, hct::vec3& b)
{
	_mm_store_ps(&a.x,
	_mm_sub_ps(_mm_load_ps(&a.x), _mm_load_ps(&b.x)));
	return a;
}

hct::vec3 operator+(hct::vec3& a, hct::vec3& b)
{
	return a += b;
}

hct::vec3 operator-(hct::vec3& a, hct::vec3& b)
{
	return a -= b;
}

hct::vec3 scale(hct::vec3& v, float f)
{

	hct::vec3 s{ f,f,f };
	_mm_store_ps(&s.x, 
	_mm_mul_ps(_mm_load_ps(&v.x), _mm_load_ps(&s.x)));
	return s;
}

float dot_product(hct::vec3& a, hct::vec3& b)
{
	__m128 res = _mm_dp_ps(
		_mm_load_ps(&a.x),
		_mm_load_ps(&b.x),
		0x71
	);

	return _mm_cvtss_f32(res);
}

hct::vec3 cross_product(hct::vec3& a, hct::vec3& b)
{
	__m128 u = _mm_load_ps(&a.x);
	__m128 v = _mm_load_ps(&b.x);

	u = _mm_shuffle_ps(u, u, 0x52);
	v = _mm_shuffle_ps(v, v, 0x09);

	__m128 res = _mm_mul_ps(u, v);
	u = _mm_shuffle_ps(u, u, 0x52);
	v = _mm_shuffle_ps(v, v, 0x09);

	// (u*v)-res
	hct::vec3 out{};
	_mm_store_ps(&out.x,_mm_fmsub_ps(u, v, res));
	return out;
}
