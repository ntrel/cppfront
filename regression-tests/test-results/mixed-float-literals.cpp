

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"


//=== Cpp2 type definitions and function declarations ===========================

void literals_cpp1() {
  // integers
  123;
  123u;
  123ul;
  123ull;
  123l;
  123ll;
  123'456ll;
  123;
  123U;
  123UL;
  123ULL;
  123L;
  123LL;
  123'456LL;
  // float points
  123'456.0f;
  123'456.f;
  456.0;
  456.;
  1.0e10;
  1.0e+10;
  1.0e-10;
  1.0e-10f;
  1.e-10;
  1.e-10f;
  1e-10;
  1e-10f;
  1e-1'0;
  123'456.0F;
  123'456.F;
  456.0;
  456.;
  1.0E10;
  1.0E+10;
  1.0E-10;
  1.0E-10F;
  1.E-10;
  1.E-10F;
  1E-10;
  1E-10F;
  1E-1'0;
  // invalid
  // 456f
  // (void)1e-10.0f;
  // 1.0e-10.0;
  // 1.0e-10.0f;
  // 1e-10.0;
  // 1e-10.0f;
  // 1e - 10;
  // 1e - 10.0;
  // 1e - 10f;
  // 1e - 10.0f;
}

#line 57 "mixed-float-literals.cpp2"
auto literals_cpp2() -> void;

#line 114 "mixed-float-literals.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================


#line 57 "mixed-float-literals.cpp2"
auto literals_cpp2() -> void{
  // integers
  123;
  123u;
  123ul;
  123ull;
  123l;
  123ll;
  123'456ll;
  123;
  123U;
  123UL;
  123ULL;
  123L;
  123LL;
  123'456LL;
  // float points
  123'456.0f;
  456.0;
  1.0e10;
  1.0e+10;
  1.0e-10;
  1.0e-10f;
  1e-10;
  1e-10f;
  1e-1'0;
  123'456.0F;
  456.0;
  1.0E10;
  1.0E+10;
  1.0E-10;
  1.0E-10F;
  1E-10;
  1E-10F;
  1E-1'0;
  // invalid
  // 456f
  // (void)1e-10.0f;
  // 1.0e-10.0;
  // 1.0e-10.0f;
  // 1e-10.0;
  // 1e-10.0f;
  // 1e - 10;
  // 1e - 10.0;
  // 1e - 10f;
  // 1e - 10.0f;
  // 123'456.f;
  // 123'456.f;
  // 456.;
  // 1.e-10;
  // 1.e-10f;
  // 123'456.F;
  // 456.;
  // 1.E-10;
  // 1.E-10F;
}

[[nodiscard]] auto main() -> int{}

