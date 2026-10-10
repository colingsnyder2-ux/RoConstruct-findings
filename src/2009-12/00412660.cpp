// from server: 48% by atomic.potato
extern "C" void __cdecl sym(void*);

struct S
{
    S* __cdecl f(void*);
};

S* S::f(void* p)
{
    void* q = p;
    sym(q);
    return this;
}
