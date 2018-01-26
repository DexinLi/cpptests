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

struct C {
  inline bool operator == (const C& a) const { return false; }
};
int bar() {
 C a, b;
 bool x = a == b;
};

int main()
{
    auto g = [](int a){return a;};
    int arr[sizeof(int)];
    A<int> a;
    a.foo(a);
    // B<A,int> b;
    // b.foo(a);
    return 0;
}