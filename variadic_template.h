template<typename T>
T add_same_type(T arg1)
{
    return arg1;
}

template <typename T, typename... Args>
T add_same_type(T arg1, Args... arg)
{
    return arg1 + add_same_type(arg...);
} 

