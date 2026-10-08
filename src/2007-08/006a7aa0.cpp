// from server: 56% by colin
// roc 2007-08 006a7aa0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7aa0
//
// 006a7aa0  83ec14               sub esp, 0x14
// 006a7aa3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a7aa7  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 006a7aad  8d1424               lea edx, [esp]
// 006a7ab0  52                   push edx
// 006a7ab1  68d9fdffff           push 0xfffffdd9
// 006a7ab6  89442418             mov dword ptr [esp + 0x18], eax
// 006a7aba  e8214af9ff           call 0x63c4e0
// 006a7abf  83c414               add esp, 0x14
// 006a7ac2  c20400               ret 4

struct CXTPRibbonBar {
    char pad[0x264];
    void* field_264;
    void sub_6A7AA0(int);
};

extern "C" void __stdcall sub_63C4E0(void*, int, void*);

void CXTPRibbonBar::sub_6A7AA0(int arg) {
    char buf[0x14];
    sub_63C4E0(field_264, 0xfffffdd9, buf);
}
