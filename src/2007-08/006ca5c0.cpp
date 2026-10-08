// from server: 68% by colin
// roc 2007-08 006ca5c0  unit: CXTPToolBar::CControlButtonHide  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca5c0
//
// 006ca5c0  56                   push esi
// 006ca5c1  57                   push edi
// 006ca5c2  8bf9                 mov edi, ecx
// 006ca5c4  e887ffffff           call 0x6ca550
// 006ca5c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ca5cd  8bf0                 mov esi, eax
// 006ca5cf  8b06                 mov eax, dword ptr [esi]
// 006ca5d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006ca5d7  51                   push ecx
// 006ca5d8  57                   push edi
// 006ca5d9  8bce                 mov ecx, esi
// 006ca5db  ffd2                 call edx
// 006ca5dd  5f                   pop edi
// 006ca5de  8bc6                 mov eax, esi
// 006ca5e0  5e                   pop esi
// 006ca5e1  c20400               ret 4

struct CXTPControl {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    virtual void vf32();
    virtual void vf33();
    virtual void vf34();
    virtual void vf35();
    virtual void vf36();
    virtual void vf37();
    virtual void vf38();
    virtual void vf39();
    virtual void vf40();
    virtual void vf41();
    virtual void vf42();
    virtual void vf43();
    virtual void vf44();
    virtual void vf45();
    virtual void vf46();
    virtual void vf47();
    virtual void vf48();
    virtual void vf49();
    virtual void vf50();
    virtual void vf51();
    virtual void vf52();
    virtual void vf53();
    virtual void vf54();
    virtual void vf55();
    virtual void vf56();
};

struct CControlButtonHide {
    CXTPControl* GetControl(int nIndex);
    CXTPControl* SetControl(int nIndex);
};

CXTPControl* CControlButtonHide::SetControl(int nIndex) {
    CXTPControl* pControl = GetControl(nIndex);
    pControl->vf56();
    return pControl;
}
