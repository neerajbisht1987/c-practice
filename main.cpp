#include <iostream>
// #include "is_same.h"
// #include "is_signed_type.h"
// #include "variadic_template.h"
// #include "my_make_shared.h"
// #include "smart_pointer.h"
#include <string>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#include"tournament.h"

struct A
{
};
struct B
{
    B(int x) : a(x) {}
    int a;
};

struct C
{
    C(int x, int y) : x(x), y(y) {}
    int x, y;
};


int main()
{
    std::vector<int> v = {1,10,9,8,7,4,5,6};;

    
    findSecondBest(v);
    //findSecondBest({1,10,9,8,7,4,5,6});
    //std::vector<val> vec;

    // std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // std::vector<int> result;
    // std::transform(begin(vec), end(vec), begin(vec1), back_inserter(result), std::multiplies<int>());
    // std::for_each(result.begin(), result.end(), [](int val) { std::cout << "value:" << val << "\n"; });

    //   std::transform(begin(vec),end(vec),std::back_inserter(result),[](int val){return val*10;});
    // std::copy(vec.begin(),vec.end(),std::back_inserter(result));
    //  std::for_each(result.begin(),result.end(),[](int val){std::cout<<"value:"<<val<<"\n";});
    //std::vector<int> res1(10, 15);
    // std::fill(res1.begin(),res1.begin()+5,11);
    // std::vector<int> res;

    // std::generate(res.begin(), res.end(), []() { return 20 + 5; });
    // std::for_each(res.begin(), res.end(), [](int val) { std::cout << "value:" << val << "\n"; });
    // //  vec.push(10);
    //auto vec=std::vector();

    // std::cout << is_same_type<int, int>::value << "\n";          // true
    // std::cout << is_same_type<int, unsigned int>::value << "\n"; // false
    //                                                              //   auto v = is_same_type<int, int>();
    //                                                              //   std::cout << v() << "\n"; // true
    // std::cout << is_signed_type<int>::value << "\n";
    // std::cout << is_signed_type<unsigned>::value << "\n";

    // std::cout << is_signed_type<A>::value << "\n";

    // std::cout << "same type value:" << add_same_type(1, 2, 3, 4, 5) << "\n";
    // std::cout << "same type value:" << add_same_type(std::string("I "), std::string("am "), std::string("a "), std::string("good "), std::string("booy")) << "\n";
    // auto sharedA = my_make_shared<B>(10);
    // auto sharedB = my_make_shared<C>(10, 20);
    // auto ptrB = smart_pointer<B>(10);

    // {
    //     auto ptrC = smart_pointer<C>(10, 20);
    //     std::cout << "pointer C x:" << ptrC->x << " y:" << ptrC->y << "\n";
    // }
    // std::cout << "pointer B" << ptrB->a << "\n";

    // std::cout << is_same_type<int, unsigned int>() << "\n"; // false

    //std::cout << is_same_type<int, signed int>::value << "\n";   // true
}
