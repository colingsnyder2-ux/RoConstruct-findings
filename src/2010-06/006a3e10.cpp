// from server: 71% by atomic.potato
struct S
{
    void f(void*, void*, void*, void*, void*);
};

extern "C" void __cdecl func_006a3d70(S*, void*, void*, void*, void*, void*);

void S::f(void* a, void* b, void* c, void* d, void* e)
{
    func_006a3d70(this, e, d, c, b, a);
}
