// from server: 67% by atomic.potato
extern "C" void* __stdcall G1_func_0098deb8(void*, void*, void*);

struct S
{
    void* f(void*);
};

void* S::f(void* p)
{
    void* v = 0;
    G1_func_0098deb8(p, *(void**)((char*)this + 0x88), v);
    return p;
}
