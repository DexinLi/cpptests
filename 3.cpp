struct D{
  int d;
};
struct X{
  D c;
};
typedef X C;
struct B{
  C a1,b1;
  X a,b;
  void foo(){
    a1.c.d = b1.c.d;
  }
};
