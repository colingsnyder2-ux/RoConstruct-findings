// from server: 52% by colin
struct S {
    int f(int a, int b);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);

int S::f(int a, int b) {
    int* p;
    *(int*)this = 0;
    p = (int*)sub_62fef6(0x14);
    if (p) {
        p[1] = 1;
        p[2] = 1;
        p[0] = 0x7bb808;
        p[3] = a;
    } else {
        p = 0;
    }
    *(int*)this = (int)p;
    return (int)this;
}
