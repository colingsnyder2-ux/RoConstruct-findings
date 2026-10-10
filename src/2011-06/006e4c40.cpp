// from server: 79% by atomic.potato
extern "C" void __cdecl func_006e4b20(void*, void*, void*, void*, void*, void*);

struct S
{
    void f(void*, void*, void*, void*, void*);
};

void S::f(void* a, void* b, void* c, void* d, void* e)
{
    func_006e4b20(this, a, b, c, d, e);
}
