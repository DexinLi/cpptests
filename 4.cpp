class A {

  const B b;
  B *b3,b4;
  void foo() {
  	b->a.c.d = 1;
    b3->a.c.d=b4.a.c.d;
  }
};
