// from server: 84% by atomic.potato
struct S
{
    void* f(void*);
};

S* func_008940b0(S*);

void* S::f(void* arg)
{
    S* p = func_008940b0(this);
    typedef void (__thiscall *Fn)(S*, void*);
    Fn fn = *(Fn*)((char*)*(void**)p + 0x1dc);
    fn(p, arg);
    return p;
}
