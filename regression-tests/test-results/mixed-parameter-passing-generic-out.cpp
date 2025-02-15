

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"


//=== Cpp2 type definitions and function declarations ===========================

#include <iostream>

struct X {
    X(int) { }
};
auto operator<<(std::ostream& o, X const&) -> std::ostream& {
    o << "exxxx";
    return o;
}

#line 11 "mixed-parameter-passing-generic-out.cpp2"
auto f(auto* x_) -> void;

#line 15 "mixed-parameter-passing-generic-out.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================


#line 11 "mixed-parameter-passing-generic-out.cpp2"
auto f(auto* x_) -> void{
    auto x = cpp2::out(x_); 
#line 12 "mixed-parameter-passing-generic-out.cpp2"
    x.construct(42);
}

[[nodiscard]] auto main() -> int{
    cpp2::deferred_init<int> a; 
    f(&a);
    std::cout << std::move(a.value()) << "\n";

    cpp2::deferred_init<X> b; 
    f(&b);
    std::cout << std::move(b.value()) << "\n";
}

