#include <stdio.h>

struct Dummy {
    int int_val;
    double double_val;
};

struct Bigly {
    int i0;
    int i1;
    int i2;
    int i3;
    int i4;
    int i5;
    int i6;
    int i7;
    int i8;
    int i9;
    int i10;
    int i11;
    int i12;
    int i13;
};

void test_call(struct Bigly struct_ex, int int_ex, double double_ex, 
        float float_ex, struct Dummy* ptr_ex);

int main(void) {

    struct Dummy d = { 1, 10.3 };
    struct Bigly b = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    test_call(b, 2, 20.6, 30.9f, &d);

    return 0;

}

void test_call(struct Bigly struct_ex, int int_ex, double double_ex, 
        float float_ex, struct Dummy* ptr_ex) {

    printf("Values: %d, %d, %d, %f, %f, %d, %f \n", struct_ex.i0, struct_ex.i1,
            int_ex, double_ex, float_ex, ptr_ex->int_val, ptr_ex->double_val);

}
