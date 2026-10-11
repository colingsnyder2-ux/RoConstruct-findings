// from server: 98% by atomic.potato
struct CXTPTabClientWnd
{
    char pad0[0x28];
    void* v28;
    int v2c;
    int v30;
    int v0c;
    void f();
};

void CXTPTabClientWnd::f()
{
    v0c = 0;
    if (v28 != 0)
    {
        typedef void (__thiscall *Fn)(void*);
        Fn p = (Fn)*(void**)((char*)*(void**)v28 + 0x84);
        p(v28);
    }
    else if (v2c == 0)
    {
        typedef void (__thiscall *Fn)(void*, int);
        Fn p = (Fn)*(void**)((char*)*(void**)v30 + 0x158);
        p((void*)v30, 1);
    }
}
