// from server: 60% by atomic.potato
extern "C" void __cdecl func_0085a7a0(void*, void*, void*, void*, void*, void*);

struct S
{
    void __stdcall f(void*, void*, void*, void*);
};

void __stdcall S::f(void* a, void* b, void* c, void* d)
{
    func_0085a7a0(this, d, a, b, c, d);
}
