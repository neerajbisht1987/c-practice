template<class X, X v>
struct type_constant
{
    static constexpr X value =v;
    typedef X valueType;
    constexpr valueType operator ()(){return value;}
};

typedef   type_constant<bool,true> true_type1;
typedef   type_constant<bool,false> false_type1;

template<class X, class Y>
struct is_same_type :false_type1{};

template<class X>
struct is_same_type<X,X> :true_type1{};

