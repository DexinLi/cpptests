class A {

  const B *b,*b2;
  B *b3,b4;
  void foo() {
  	b->a.c.d=b2->a.c.d;
    b3->a.c.d=b4->a.c.d;
  }
};
