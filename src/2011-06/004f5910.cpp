// from server: 52% by atomic.potato
extern "C" void* __cdecl func_0080a05e(unsigned int size);

struct S {
    void* field0;
    S* func(unsigned int a, unsigned int b);
};

S* S::func(unsigned int a, unsigned int b)
{
    field0 = 0;
    void* p = func_0080a05e(0x14);
    if (p) {
        *(unsigned int*)((char*)p + 4) = 1;
        *(unsigned int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xa7b25c;
        *(unsigned int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
