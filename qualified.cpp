
C A::foo() {
    return C();
}
int A::Bar() {
    B::C a;
    B::C b;
    C x = foo();
    C y = A::foo();
    C z = B::foo();
    return 1;
}