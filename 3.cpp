struct D{
  int d;
};
struct X{
  D c;
};
typedef X C;
struct B{
  C a,b;
  void foo(){
    a.c.d = b.c.d;
  }
};
