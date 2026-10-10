// from server: 52% by colin
struct S {
    void* p;
    S* construct(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

S* S::construct(int a, int b)
{
    p = 0;
    void* mem = operator_new(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(int*)mem = 0x7bb86c;
        *(int*)((char*)mem + 0xc) = a;
    } else {
        mem = 0;
    }
    p = mem;
    return this;
}
