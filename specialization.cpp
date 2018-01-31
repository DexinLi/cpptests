template<class T>
class A{};

// template<class T1,class T2>
// class A<T1(T2)> {};

template<class T,class... Args>
class A<T(Args...)>{};