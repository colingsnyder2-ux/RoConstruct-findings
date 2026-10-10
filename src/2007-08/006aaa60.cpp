// from server: 50% by colin
struct CXTPRibbonBar {
    char pad0[0xf8];
    void* m_pFrameHelper;
    int f(int, int, int);
};

extern "C" int __cdecl sub_643980();
extern "C" int __cdecl sub_6439b0();
extern "C" int __cdecl sub_6468a0(int, int, int);
extern "C" int __cdecl sub_67a9a0(void*, int, int);
extern "C" int __cdecl sub_6a79e0(void*);
extern "C" int __cdecl sub_6a7d80(void*, int, int);
extern "C" int __cdecl sub_6a7f30(void*);
extern "C" int __cdecl sub_6aa2e0(void*, int, int, int);

int CXTPRibbonBar::f(int a1, int a2, int a3)
{
    if (sub_643980() != 0)
        return 0;
    if (sub_6439b0() != 0)
        return sub_6468a0(a1, a2, a3);

    void** vtbl = *(void***)this;
    typedef int (__thiscall *Fn0)(void*, int, int, int);
    ((Fn0)vtbl[0x50])(this, 0, 1, 0);
    typedef int (__thiscall *Fn1)(void*, int, int);
    ((Fn1)vtbl[0x52])(this, -1, 0);

    if (sub_6a7d80(this, a1, a2) != 0)
        return 0;

    void* p = (void*)sub_67a9a0(m_pFrameHelper, a1, a2);
    if (p != 0) {
        void** pvtbl = *(void***)p;
        typedef int (__thiscall *Fn2)(void*);
        if (((Fn2)pvtbl[0x3c])(p) != 0)
            return 0;
        return sub_6aa2e0(this, a1, a2, (int)p);
    }

    void* q = (void*)sub_6a7f30(this);
    if (q == 0)
        return 0;

    int v4 = *(int*)((char*)q + 0x40);

    int* r = (int*)sub_6a79e0(this);
    if (v4 - *(int*)((char*)r + 0x640) < a3)
        return sub_6aa2e0(this, a1, a2, *(int*)((char*)q + 0x6c));

    return 0;
}
