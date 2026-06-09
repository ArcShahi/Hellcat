#ifndef VEC3_HPP
#define VEC3_HPP

namespace hct
{
	struct alignas(16) vec3
	{
		float x{}, y{}, z{};
	};
}

// Unary Operators

hct::vec3& operator+=(hct::vec3& a, hct::vec3& b);
hct::vec3& operator-=(hct::vec3& a, hct::vec3& b);

// Binary operators

hct::vec3 operator+(hct::vec3& a, hct::vec3& b);
hct::vec3 operator-(hct::vec3& a, hct::vec3& b);


hct::vec3 scale(hct::vec3& v, float f);
float dot_product(hct::vec3& a, hct::vec3& b);
hct::vec3 cross_product(hct::vec3& a, hct::vec3& b);


#endif