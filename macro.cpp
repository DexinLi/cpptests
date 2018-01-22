#define LIKELY(x)   (x)
void foo() {
  LIKELY(2 == 3);
}

#define LIKE(xx)   (x\
x)

void bar() {
    LIKE(3==4);
}
