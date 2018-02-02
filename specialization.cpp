template<class T>
struct A;

template<class T,class... Args>
struct A<T(Args...)>{
};

template<class T>
class B{};

template<class T,class... Args>
struct B<T(Args...)>{
};

template<class T>
struct C{};

template<>
struct C<int> {
    static const bool value = true;
};



void foo()
{
    A<void()> a;
    B<void()> b0;
    B<int> b1;
    C<int> c;
}