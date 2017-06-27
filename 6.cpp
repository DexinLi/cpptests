class A {

  A(B x):b(x),b4(x),b3(nullptr){}
  C foo(B x, C y) {
    C c1,c2;
  	b.a.c.d = 1;
    b3->a.c.d=b4.a.c.d;
    foo(b4,c1).c.d;
    c1.c.d;
    return B().c;
  }
  private:
  const B b;
  B *b3,b4;
};