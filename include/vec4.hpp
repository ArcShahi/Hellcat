#ifndef VEC4_HPP
#define VEC4_HPP

namespace hct
{
	struct alignas(16) vec4
	{
		float x{}, y{}, z{}, w{};
	};

}

hct::vec4& operator+=(hct::vec4& a, hct::vec4& b);
hct::vec4& operator-=(hct::vec4& a, hct::vec4& b);

// Binary operators

hct::vec4 operator+(hct::vec4& a, hct::vec4& b);
hct::vec4 operator-(hct::vec4& a, hct::vec4& b);

#endif 