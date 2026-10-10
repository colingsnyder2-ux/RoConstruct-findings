// from server: 52% by colin
struct S {
    void* p;
    void* f(int a, int b);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);

void* S::f(int a, int b)
{
    p = 0;
    void* mem = sub_62fef6(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(int*)mem = 0x7bb7cc;
        *(int*)((char*)mem + 0xc) = a;
    } else {
        mem = 0;
    }
    p = mem;
    return this;
}
