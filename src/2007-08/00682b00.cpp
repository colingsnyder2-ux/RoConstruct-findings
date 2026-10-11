// from server: 100% by colin
// roc 2007-08 00682b00  unit: CXTPPropertyGrid  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682b00
//
// 00682b00  56                   push esi
// 00682b01  8bf1                 mov esi, ecx
// 00682b03  e8785a0b00           call 0x738580
// 00682b08  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00682b0e  8b01                 mov eax, dword ptr [ecx]
// 00682b10  8b5034               mov edx, dword ptr [eax + 0x34]
// 00682b13  5e                   pop esi
// 00682b14  ffe2                 jmp edx

struct CXTPPropertyGrid {
    char pad[0x13c];
    struct Inner* m_pInner;
    void Func();
};

struct Inner {
    virtual void VFunc0();
    virtual void VFunc1();
    virtual void VFunc2();
    virtual void VFunc3();
    virtual void VFunc4();
    virtual void VFunc5();
    virtual void VFunc6();
    virtual void VFunc7();
    virtual void VFunc8();
    virtual void VFunc9();
    virtual void VFunc10();
    virtual void VFunc11();
    virtual void VFunc12();
    virtual void VFunc13();
};

extern void sub_738580();

void CXTPPropertyGrid::Func()
{
    sub_738580();
    m_pInner->VFunc13();
}
