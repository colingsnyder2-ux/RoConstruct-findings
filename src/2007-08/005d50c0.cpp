// from server: 52% by colin
struct S {
    void* p;
    S* f(int a, int b);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);

S* S::f(int a, int b)
{
    p = 0;
    void* q = sub_62fef6(0x14);
    if (q) {
        *(int*)((char*)q + 4) = 1;
        *(int*)((char*)q + 8) = 1;
        *(int*)q = 0x7bb7f4;
        *(int*)((char*)q + 0xc) = a;
    } else {
        q = 0;
    }
    p = q;
    return this;
}
