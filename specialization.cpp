template<class T>
class A{};

// template<class T1,class T2>
// class A<T1(T2)> {};

template<class T,class... Args>
class A<T(Args...)>{};

template<class T1,class T2>
T1 foo(T2 x);

template<class T>
T foo<T, int>(T x)
{
    return x;
}