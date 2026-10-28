// from server: 0% by atomic.potato
extern "C" void* __cdecl func_00718a38(unsigned int);

struct S {
    void* field0;
    void* method(unsigned int, unsigned int);
};

void* S::method(unsigned int a, unsigned int b)
{
    void* p;
    field0 = 0;
    p = func_00718a38(0x14);
    if (p) {
        *(unsigned int*)((char*)p + 4) = 1;
        *(unsigned int*)((char*)p + 8) = 1;
        *(unsigned int*)p = 0x8de404;
        *(unsigned int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
