// from server: 0% by atomic.potato
extern "C" void* __cdecl func_0098211a(unsigned int size);

struct S {
    void* field0;
    void* func(unsigned int a, unsigned int b);
};

void* S::func(unsigned int a, unsigned int b)
{
    void* p;
    field0 = 0;
    p = func_0098211a(0x14);
    if (p) {
        *(unsigned int*)((char*)p + 4) = 1;
        *(unsigned int*)((char*)p + 8) = 1;
        *(unsigned int*)p = 0xb96b6c;
        *(unsigned int*)((char*)p + 0xc) = a;
    }
    field0 = p;
    return this;
}
