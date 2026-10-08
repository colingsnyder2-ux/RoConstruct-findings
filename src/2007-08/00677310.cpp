// from server: 100% by colin
// roc 2007-08 00677310  unit: CXTPCustomizeCommandsPage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677310
//
// 00677310  56                   push esi
// 00677311  8bf1                 mov esi, ecx
// 00677313  e848310500           call 0x6ca460
// 00677318  c7060cd17c00         mov dword ptr [esi], 0x7cd10c
// 0067731e  c74620acd07c00       mov dword ptr [esi + 0x20], 0x7cd0ac
// 00677325  c786f800000001000000 mov dword ptr [esi + 0xf8], 1
// 0067732f  c786d40000005a000000 mov dword ptr [esi + 0xd4], 0x5a
// 00677339  8bc6                 mov eax, esi
// 0067733b  5e                   pop esi
// 0067733c  c3                   ret 

struct CXTPCustomizeCommandsPage {
    int field0;
    char pad[0x1c];
    int field20;
    char pad2[0xd0];
    int fieldd4;
    char pad3[0x20];
    int fieldf8;
    CXTPCustomizeCommandsPage* construct();
};

extern "C" void __fastcall sub_6ca460(CXTPCustomizeCommandsPage* self);

CXTPCustomizeCommandsPage* CXTPCustomizeCommandsPage::construct() {
    sub_6ca460(this);
    *(int*)this = 0x7cd10c;
    *(int*)((char*)this + 0x20) = 0x7cd0ac;
    *(int*)((char*)this + 0xf8) = 1;
    *(int*)((char*)this + 0xd4) = 0x5a;
    return this;
}
