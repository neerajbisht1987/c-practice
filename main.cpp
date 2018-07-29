#include<iostream>
#include"is_same.h"
#include"is_signed_type.h"
#include"variadic_template.h"
#include"my_make_shared.h"
#include<string>
struct A{};
struct B{
    B (int ){}
};

struct C
{
    C(int,int){}
};
int main()
{
    std::cout << is_same_type<int, int>::value << "\n";          // true
    std::cout << is_same_type<int, unsigned int>::value << "\n"; // false
 //   auto v = is_same_type<int, int>();
 //   std::cout << v() << "\n"; // true
    std::cout << is_signed_type<int>::value<<"\n";
    std::cout << is_signed_type<unsigned>::value<<"\n";
    
    std::cout << is_signed_type<A>::value<<"\n";


    std::cout<<"same type value:"<<add_same_type(1,2,3,4,5)<<"\n";
    std::cout<<"same type value:"<<add_same_type(std::string("I "),std::string("am "),std::string("a "),std::string("good "),std::string("booy"))<<"\n";
    auto sharedA = my_make_shared<B>(10);
    auto sharedB = my_make_shared<C>(10,20);

    // std::cout << is_same_type<int, unsigned int>() << "\n"; // false

    //std::cout << is_same_type<int, signed int>::value << "\n";   // true
 
}
