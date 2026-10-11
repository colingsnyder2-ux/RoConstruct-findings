// from server: 51% by colin
struct CSelectionPropGrid {
    char pad[0xec];
    void* field_ec;
    bool func_004307e0(unsigned char arg);
};

extern "C" void* __stdcall sub_6a3df0(void* self, const char* name, unsigned int flags);
extern "C" void* __stdcall sub_6a3ff0(void* self, const char* name, int a, int b);
extern "C" void __stdcall sub_6b5090(void* self, unsigned int a, unsigned int b);
extern "C" void __stdcall sub_6a66e0(void* self, const char* name, int a);
extern "C" void __stdcall sub_6c1ea0(void* self, int a);
extern "C" void __stdcall sub_4303a0(void* self, void* a, void* b);

extern unsigned int G_96617c;

bool CSelectionPropGrid::func_004307e0(unsigned char arg)
{
    void* esi = field_ec;
    void* p;

    p = sub_6a3df0(esi, (const char*)0x811208, 0x80);
    if (p == 0)
        return false;

    sub_6b5090(p, 0x1700, 0);

    p = sub_6a3ff0(esi, (const char*)0x8111fc, 0, 0);
    if (p == 0)
        return false;

    {
        void** vt = *(void***)p;
        typedef int (__stdcall *Fn)(void*, unsigned int, unsigned char);
        Fn fn = (Fn)vt[0x154 / 4];
        if (fn(p, 0x80, arg) == 0)
            return false;
    }

    void* b = sub_6a3ff0(esi, (const char*)0x8111f4, 0, 0);
    if (b == 0)
        return false;

    {
        void** vt = *(void***)b;
        typedef int (__stdcall *Fn)(void*, unsigned int, unsigned char);
        Fn fn = (Fn)vt[0x154 / 4];
        if (fn(b, 0x87, arg) == 0)
            return false;
    }

    void* c = sub_6a3ff0(esi, (const char*)0x8111ec, 0, 0);
    if (c == 0)
        return false;

    {
        void** vt = *(void***)c;
        typedef int (__stdcall *Fn)(void*, unsigned int, unsigned char);
        Fn fn = (Fn)vt[0x154 / 4];
        if (fn(c, 0x89, arg) == 0)
            return false;
    }

    void* d = sub_6a3ff0(esi, (const char*)0x8111e4, 0, 0);
    if (d == 0)
        return false;

    {
        void** vt = *(void***)d;
        typedef int (__stdcall *Fn)(void*, unsigned int, unsigned char);
        Fn fn = (Fn)vt[0x154 / 4];
        if (fn(d, 0x91, arg) == 0)
            return false;
    }

    void* e = sub_6a3ff0(esi, (const char*)0x8111dc, 1, 0);
    if (e == 0)
        return false;

    {
        void** vt = *(void***)e;
        typedef int (__stdcall *Fn)(void*, unsigned int, unsigned char);
        Fn fn = (Fn)vt[0x154 / 4];
        if (fn(e, 0x96, arg) == 0)
            return false;
    }

    sub_6c1ea0(e, 0x73);

    {
        void** vt = *(void***)e;
        typedef int (__stdcall *Fn)(void*, int);
        Fn fn = (Fn)vt[0x164 / 4];
        fn(e, 0);
    }

    sub_4303a0(this, c, b);
    sub_4303a0(this, d, b);

    sub_6a66e0(esi, (const char*)0x92ec60, 0x1a);

    *(int*)(*(char**)((char*)esi + 0x74) + 0x20) = 1;
    G_96617c = 0x1194;
    *(int*)(*(char**)((char*)esi + 0x74) + 0x2c) = 1;

    return true;
}
