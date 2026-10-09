// roc 2010-06 007b9550  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b9550
//
// 007b9550  56                   push esi
// 007b9551  8bf1                 mov esi, ecx
// 007b9553  e838f1ffff           call 0x7b8690
// 007b9558  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b955c  8b10                 mov edx, dword ptr [eax]
// 007b955e  8b5274               mov edx, dword ptr [edx + 0x74]
// 007b9561  56                   push esi
// 007b9562  51                   push ecx
// 007b9563  8bc8                 mov ecx, eax
// 007b9565  ffd2                 call edx
// 007b9567  5e                   pop esi
// 007b9568  c20400               ret 4
// copied from an identical function in another client (function ?Method@CXTPCommandBar@ns_ROCX000008@@QAEXH@Z)

namespace ns_ROCX000008 {
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
}
