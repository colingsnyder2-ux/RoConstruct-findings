// from server: 100% by tester
// roc 2008-06 006b5d30  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b5d30
//
// 006b5d30  56                   push esi
// 006b5d31  8bf1                 mov esi, ecx
// 006b5d33  e898f1ffff           call 0x6b4ed0
// 006b5d38  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b5d3c  8b10                 mov edx, dword ptr [eax]
// 006b5d3e  8b5274               mov edx, dword ptr [edx + 0x74]
// 006b5d41  56                   push esi
// 006b5d42  51                   push ecx
// 006b5d43  8bc8                 mov ecx, eax
// 006b5d45  ffd2                 call edx
// 006b5d47  5e                   pop esi
// 006b5d48  c20400               ret 4

struct CXTPCommandBar;

struct CXTPCommandBar_Inner {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74(int, CXTPCommandBar*);
};

struct CXTPCommandBar {
    CXTPCommandBar_Inner* GetInner();
    void Method(int arg);
};

void CXTPCommandBar::Method(int arg) {
    CXTPCommandBar_Inner* inner = GetInner();
    inner->vfunc_74(arg, this);
}
