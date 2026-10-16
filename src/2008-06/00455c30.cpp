// from server: 23% by colin
struct CRobloxDoc {
    void sub_455A20(int);
    void func_00455C30();
};

extern "C" {
    void __stdcall mfc_803F04();
    void __stdcall mfc_8032C0();
    void __stdcall mfc_803EE0();
    void __stdcall mfc_803F14();
    void __stdcall mfc_802458();
    void __cdecl str_ctor_6A0E72();
    int __cdecl str_dtor_6A0E6C();
    void __cdecl str_dtor_6A0E5A();
    void __cdecl str_ctor_6A0E66();
}

void CRobloxDoc::func_00455C30()
{
    char buf1[4];
    char buf2[0x1d0];
    char buf3[0x1c];

    mfc_803F04();
    mfc_8032C0();
    mfc_803EE0();
    str_ctor_6A0E72();
    if (str_dtor_6A0E6C() == 1)
    {
        str_ctor_6A0E66();
        mfc_803EE0();
        mfc_802458();
        sub_455A20(0);
        mfc_803F14();
    }
    str_dtor_6A0E5A();
    mfc_803F14();
}
