// from server: 36% by colin
struct CXTPRibbonGroupPopupToolBar {
    void* m_pUnknown0;
    char pad[0x50];
    void* m_pUnknown54;
    char pad2[4];
    void* m_pUnknown5c;
    char pad3[0x1e8];
    void* m_pUnknown248;
    void sub_007194c0();
};

void CXTPRibbonGroupPopupToolBar::sub_007194c0()
{
    *(void**)this = (void*)0x7dfbd4;
    *(void**)((char*)this + 0x54) = (void*)0x7dfbc4;
    *(void**)((char*)this + 0x5c) = (void*)0x7dfb64;

    void* p = *(void**)((char*)this + 0x248);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*);
    Fn fn = (Fn)vtbl[0x6c / 4];
    fn(p);

    void* p2 = *(void**)((char*)this + 0x248);
    typedef void (__thiscall *Fn2)(void*);
    Fn2 fn2 = (Fn2)0x6301e4;
    fn2(p2);

    typedef void (__thiscall *Fn3)(void*);
    Fn3 fn3 = (Fn3)0x6773b0;
    fn3(this);
}
