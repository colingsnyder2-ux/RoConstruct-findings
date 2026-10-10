// from server: 68% by atomic.potato
extern "C" void __cdecl func_0085ccd0(void*, void*, void*, void*, void*, void*);

struct S
{
    void f(void*, void*, void*, void*, void*);
};

void S::f(void* a, void* b, void* c, void* d, void* e)
{
    func_0085ccd0(this, e, d, a, b, c);
}
