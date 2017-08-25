template<class T>
struct A{
    void foo(A& a){
        return ;
    }
};

template<template <class> class T1, class T2>
struct B:A<T2>
{
    void foo(T1<T1<T2>> t){
        return ;
    }
};


int main()
{
    auto g = [](auto a){return a;};
    int arr[sizeof(int)];
    A<int> a;
    a.foo(a);
    // B<A,int> b;
    // b.foo(a);
    return 0;
}