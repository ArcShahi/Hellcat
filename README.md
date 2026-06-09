# Hellcal

A toy SIMD maths library written using C++23 and Intel Intrinsic.

It's another toy of mine. It's not for general use, it's more like a reference / notes for me.

The goal is to learn more about memory, RAM brandwidth, Cache and Benchmarking.

I'll write function in SIMD if it makes sense. I'm not gonna fucking write addition of 2 nubmers using SIMD.

What's better way to learn SIMD than to write a maths library  ?!!


It'll mature with time and experience...

I'll benchmark it against some function from GLM Library. NOT with the goal to beat it...
It's just a learning process.

I'm also implementging it in raw assembly for fun, [Here](https://github.com/ArcShahi/ASM-x86-64) take a look.

I really have no idea why am even writing it , it's fun for  sure but what'll become of it ?
Maybe after benchmarking, I'll just make 2 versions of it : SIMD and C++

Mayble I'll implement some elegant mathematical algorithms... who knows ?  It a long journey.


## Usage

Idk why you'd want to use it not but sure...
```sh
git clone https://github.com/ArcShahi/Hellcat.git 
cd Hellcat

cmake -DBUILD_SHARED_LIBS=ON -B out
cmake --build out --config release
```
Use that Lib files and `.dll` however you want.

```cpp
#include <print>
#include <vec3.hpp>

int main() {
 htc::vec3 v{0,6,9}; 
 htc::vec3 u{4,2,0}; 

 u=htc::scale(u,5.0f);
 const float dp{htc::dot_product(u,v)};
 std::println("Dot product of u,v = {}",dp);

}
```





