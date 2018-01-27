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

template <class T1,class T2,class T3>
T3 tFunc(T1 x,T2 y,T3 z) {
    return z;
}
// val TestTemplateParameter =
//     """
//       template<class>
//       	class function;

//       	template<class T, class Ret, class... Args>
//       	class function<Ret(Args...)>
//       	{
//               using func_type = Ret(*)(Args...);
//         };
//     """
//   test("template parameter") {
//     source(TestTemplateParameter)
//     val x = 1
//   }


struct C {
  inline bool operator == (const C& a) const { return false; }
  int operator[](int i){return 1;}
};
int bar() {
 C a, b;
 bool x = a == b;
 return a[1];
};

int main()
{
    tFunc(1,2,3);
    auto g = [](int a){return a;};
    int arr[sizeof(int)];
    A<int> a;
    a.foo(a);
    // B<A,int> b;
    // b.foo(a);
    return 0;
}