// from server: 71% by colin
// roc 2007-08 0044cd50  unit: CRobloxDHtmlDialog  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cd50
//
// 0044cd50  56                   push esi
// 0044cd51  8bf1                 mov esi, ecx
// 0044cd53  e8823b1e00           call 0x6308da
// 0044cd58  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 0044cd5f  7422                 je 0x44cd83
// 0044cd61  6a00                 push 0
// 0044cd63  6a00                 push 0
// 0044cd65  6a00                 push 0
// 0044cd67  6a00                 push 0
// 0044cd69  6a00                 push 0
// 0044cd6b  8d8e14010000         lea ecx, [esi + 0x114]
// 0044cd71  ff15a8e67700         call dword ptr [0x77e6a8]
// 0044cd77  50                   push eax
// 0044cd78  8bce                 mov ecx, esi
// 0044cd7a  e8553b1e00           call 0x6308d4
// 0044cd7f  33c0                 xor eax, eax
// 0044cd81  5e                   pop esi
// 0044cd82  c3                   ret 
// 0044cd83  b801000000           mov eax, 1
// 0044cd88  5e                   pop esi
// 0044cd89  c3                   ret 

struct CRobloxDHtmlDialog {
    char pad[0x114];
    void* field_114;
    char pad2[0x10];
    void* field_128;
    int sub_44cd50();
};

extern "C" void* __stdcall sub_77e6a8(void*);
extern "C" void __stdcall sub_6308da();
extern "C" void __stdcall sub_6308d4(void*);

int CRobloxDHtmlDialog::sub_44cd50() {
    sub_6308da();
    if (field_128 != 0) {
        void* p = sub_77e6a8(&field_114);
        sub_6308d4(p);
        return 0;
    }
    return 1;
}
