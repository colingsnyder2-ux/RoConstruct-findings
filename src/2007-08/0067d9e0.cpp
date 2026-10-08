// from server: 100% by colin
// roc 2007-08 0067d9e0  unit: CXTPControlCheckBox  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d9e0
//
// 0067d9e0  56                   push esi
// 0067d9e1  8bf1                 mov esi, ecx
// 0067d9e3  e878ca0400           call 0x6ca460
// 0067d9e8  c7069ce57c00         mov dword ptr [esi], 0x7ce59c
// 0067d9ee  c746203ce57c00       mov dword ptr [esi + 0x20], 0x7ce53c
// 0067d9f5  c786f800000009000000 mov dword ptr [esi + 0xf8], 9
// 0067d9ff  8bc6                 mov eax, esi
// 0067da01  5e                   pop esi
// 0067da02  c3                   ret 

struct CXTPControlCheckBox {
    int pad0;
    int pad4;
    int pad8;
    int padc;
    int pad10;
    int pad14;
    int pad18;
    int pad1c;
    int field20;
    char pad24[0xf8 - 0x24];
    int fieldf8;
    CXTPControlCheckBox* ctor();
};

extern void base_ctor_6ca460();

CXTPControlCheckBox* CXTPControlCheckBox::ctor()
{
    base_ctor_6ca460();
    *(int*)this = 0x7ce59c;
    *(int*)((char*)this + 0x20) = 0x7ce53c;
    *(int*)((char*)this + 0xf8) = 9;
    return this;
}
