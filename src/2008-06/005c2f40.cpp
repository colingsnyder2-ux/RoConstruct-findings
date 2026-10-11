// from server: 52% by atomic.potato
struct S {
    void* field0;
    void* f(int, int);
};

extern "C" void* __cdecl sub_6a0920(unsigned int);

void* S::f(int a, int b)
{
    field0 = 0;
    void* p = sub_6a0920(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x838a98;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
