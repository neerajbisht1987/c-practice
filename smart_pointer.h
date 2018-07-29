#include<iostream>


template <typename T>
class smart_pointer
{
    public:
    template<typename... Args>
    smart_pointer(Args... args)
    {
        ptr = new T(std::forward<Args>(args)...);
        std::cout<<"Constructor called \n";
    }
    ~smart_pointer()
    {
        delete ptr;
    std::cout<<"destructor called \n";
    }
    T& operator*()
    {
        return *ptr;
    }
    T* operator ->()
    {
        return ptr;
    }

    private:
    T* ptr;
};