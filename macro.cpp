#define LIKELY(x)   (x)
void foo() {
  LIKELY(2 == 3);
}

#define LIKE(xxx)   (x\
xx)

void bar() {
    LIKE(3==4);
}
