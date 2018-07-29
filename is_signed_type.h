#include<type_traits>


template <typename T,bool =std::is_arithmetic<T>::value>
struct is_signed_type :std::integral_constant<bool,T(-1) < T(0)>{};
template <typename T>
struct is_signed_type<T,false>:std::false_type{};
