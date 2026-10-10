// from server: 84% by atomic.potato
struct S
{
    void* f(void*);
};

extern "C" void* func_008f2a70(S*);

void* S::f(void* arg)
{
    void* p = func_008f2a70(this);
    void** vtable = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*);
    Fn fn = (Fn)vtable[0x1dc / 4];
    fn(p, arg);
    return p;
}
