// from server: 52% by atomic.potato
extern "C" void* __cdecl func_007f3860(unsigned int);

struct S {
    void* f(int, int);
};

void* S::f(int a, int b)
{
    void* p;
    *(void**)this = 0;
    p = func_007f3860(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x9ba0dc;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    *(void**)this = p;
    return this;
}
