// from server: 48% by atomic.potato
extern "C" void __cdecl sym(void*);

struct S
{
    void* __cdecl f(void*);
};

void* S::f(void* p)
{
    sym(p);
    return this;
}
