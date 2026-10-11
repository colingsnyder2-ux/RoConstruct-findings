// from server: 80% by colin
struct S {
    char pad0[0x14];
    int* p14;
    char pad18[0x0c];
    int* p24;
    char pad28[0x0c];
    int* p34;
    char pad38[0x6c];
    int v_a4;
    int v_a8;
    int v_b0;
    void f();
};

void S::f() {
    unsigned int eax = (unsigned int)v_b0 >> 3;
    if ((eax & 1) != 0) {
        int edx = v_a4;
        int eax2 = v_a8;
        *p14 = edx;
        *p24 = edx;
        *p34 = eax2 + edx - edx;
    } else {
        *p14 = 0;
        *p24 = 0;
        *p34 = 0;
    }
}
