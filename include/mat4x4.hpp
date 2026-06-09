#ifndef MAT4X4_HPP
#define MAT4X4_HPP

#include <vec4.hpp>

namespace hct
{
	struct mat4x4
	{
		std::array<vec4, 4> value{};
	};

	// Sacle a matrix by float
	hct::mat4x4 scale(float f, hct::mat4x4 m);

}

/*
 Memory 
 
    | x1, y1, z1, w1 | // col 0
    | x2, y2, z2, w2 | // col 1
    | x3, y3, z3, w3 | // col 2
    | x4, y4, z4, w4 | // col 3
*/





#endif // !MAT4X4_HPP
