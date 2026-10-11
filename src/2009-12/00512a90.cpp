// from server: 87% by atomic.potato
struct type_info
{
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl G1_func_00b0030c();
extern "C" bool __stdcall G1_func_0098b768(void*, void*);

struct S
{
};

void* __cdecl f(void* p)
{
    if (p == 0)
        return 0;

    void* q = *(void**)p;
    void* r;
    if (q != 0)
    {
        void** vt = *(void***)q;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[1];
        r = fn(q);
    }
    else
    {
        r = G1_func_00b0030c();
    }

    if (G1_func_0098b768(r, (void*)0x00b180e4))
    {
        return (char*)*(void**)p + 4;
    }
    return 0;
}
