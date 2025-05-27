#include <stdio.h>

typedef struct { int value; } Box;

void box_pow(Box* result, Box* x, Box* n) {
    result->value = 1;
    for (int i = 0; i < n->value; ++i) {
        result->value *= x->value;
    }
}

void run_box_pow() {
    Box result = {0};
    Box base   = {2};
    Box count  = {5};

    for (int i = 0; i < 1000000000; ++i) {
        box_pow(&result, &base, &count);
    }

    printf("%d\n", result.value); // prevent optimization
}

int main() {
    run_box_pow();
    return 0;
}
