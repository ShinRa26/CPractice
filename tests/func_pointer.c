#include <stdio.h>

void addFunc(int x, int y);

struct Test {
    void(*add)(int, int);
};
void addFunc(int x, int y) {
    int z = x+y;
    printf("Value is %d\n", z);
}

int main(int argc, char*argv[]) {
    struct Test *t = (struct Test*)malloc(sizeof(struct Test));
    t->add = &addFunc;
    t->add(5, 12);
}