// from server: 89% by atomic.potato
extern "C" int __cdecl sub_694ec0_helper();

struct type_info
{
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __stdcall sub_89e9a4(void*, void*);

extern void* dword_9DC2D4;
extern void* dword_A16480;

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
        void** vtbl = *(void***)q;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[1];
        r = fn(q);
    }
    else
    {
        r = &dword_9DC2D4;
    }

    if (sub_89e9a4(r, &dword_A16480))
    {
        return (char*)(*(void**)p) + 4;
    }
    return 0;
}
