// from server: 100% by colin
// roc 2007-08 0069e260  unit: CXTPPropertyGridItemEnum  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e260
//
// 0069e260  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 0069e266  85c0                 test eax, eax
// 0069e268  7415                 je 0x69e27f
// 0069e26a  8b00                 mov eax, dword ptr [eax]
// 0069e26c  3b8100010000         cmp eax, dword ptr [ecx + 0x100]
// 0069e272  740b                 je 0x69e27f
// 0069e274  8b11                 mov edx, dword ptr [ecx]
// 0069e276  50                   push eax
// 0069e277  8b82e8000000         mov eax, dword ptr [edx + 0xe8]
// 0069e27d  ffd0                 call eax
// 0069e27f  c3                   ret 

struct CXTPPropertyGridItemEnum {
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
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();
    virtual void vfunc_c0();
    virtual void vfunc_c4();
    virtual void vfunc_c8();
    virtual void vfunc_cc();
    virtual void vfunc_d0();
    virtual void vfunc_d4();
    virtual void vfunc_d8();
    virtual void vfunc_dc();
    virtual void vfunc_e0();
    virtual void vfunc_e4();
    virtual void vfunc_e8(int);
    char pad_0004[0xfc];
    int m_100;
    int* m_104;
    void f();
};

void CXTPPropertyGridItemEnum::f()
{
    int* p = m_104;
    if (p != 0) {
        int v = *p;
        if (v != m_100) {
            vfunc_e8(v);
        }
    }
}
