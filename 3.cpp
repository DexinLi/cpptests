struct D{
  int d;
};
struct C{
  D c;
};
struct B{
  C a,b;
};
B foo() {
  return B();
}
