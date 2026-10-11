// from server: 54% by atomic.potato
struct S_007ad0a0
{
    char pad0[12];
    void* m_ptr;
    void* f(void** a, void* b);
};

void* S_007ad0a0::f(void** a, void* b)
{
    void* p = m_ptr;
    if (!p)
    {
        *a = 0;
        return 0;
    }

    typedef void* (__thiscall *Func)(void*, void*, void*);
    Func fn = *(Func*)((char*)*(void**)p + 0x18);
    fn(p, a, b);
    return a;
}
