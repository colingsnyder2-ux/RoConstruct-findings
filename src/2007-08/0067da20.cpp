// from server: 100% by colin
// roc 2007-08 0067da20  unit: CXTPControlRadioButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067da20
//
// 0067da20  56                   push esi
// 0067da21  8bf1                 mov esi, ecx
// 0067da23  e838ca0400           call 0x6ca460
// 0067da28  c70644e77c00         mov dword ptr [esi], 0x7ce744
// 0067da2e  c74620e4e67c00       mov dword ptr [esi + 0x20], 0x7ce6e4
// 0067da35  c786f80000000b000000 mov dword ptr [esi + 0xf8], 0xb
// 0067da3f  8bc6                 mov eax, esi
// 0067da41  5e                   pop esi
// 0067da42  c3                   ret 

struct CXTPControlRadioButton {
    CXTPControlRadioButton* Construct();
    int field0;
    char pad[0x1c];
    int field20;
    char pad2[0xd4];
    int fieldF8;
};

extern "C" void __fastcall sub_6ca460(CXTPControlRadioButton* p);

CXTPControlRadioButton* CXTPControlRadioButton::Construct() {
    sub_6ca460(this);
    field0 = 0x7ce744;
    field20 = 0x7ce6e4;
    fieldF8 = 0xb;
    return this;
}
