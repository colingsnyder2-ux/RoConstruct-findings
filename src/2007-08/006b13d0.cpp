// from server: 56% by colin
// roc 2007-08 006b13d0  unit: CXTPRibbonTheme  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b13d0
//
// 006b13d0  8911                 mov dword ptr [ecx], edx
// 006b13d2  8b5004               mov edx, dword ptr [eax + 4]
// 006b13d5  895104               mov dword ptr [ecx + 4], edx
// 006b13d8  8b5008               mov edx, dword ptr [eax + 8]
// 006b13db  8b400c               mov eax, dword ptr [eax + 0xc]
// 006b13de  895108               mov dword ptr [ecx + 8], edx
// 006b13e1  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 006b13e5  89410c               mov dword ptr [ecx + 0xc], eax
// 006b13e8  8d4c2448             lea ecx, [esp + 0x48]
// 006b13ec  51                   push ecx
// 006b13ed  52                   push edx
// 006b13ee  8bcb                 mov ecx, ebx
// 006b13f0  e82bf10500           call 0x710520
// 006b13f5  5f                   pop edi
// 006b13f6  5e                   pop esi
// 006b13f7  5d                   pop ebp
// 006b13f8  5b                   pop ebx
// 006b13f9  83c440               add esp, 0x40
// 006b13fc  c20c00               ret 0xc

struct CXTPRibbonTheme {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void copyFrom(int* src, int arg1, int arg2);
};

extern "C" void __stdcall sub_710520(int* dst, int arg1, int arg2);

void CXTPRibbonTheme::copyFrom(int* src, int arg1, int arg2) {
    field0 = src[0];
    field4 = src[1];
    field8 = src[2];
    fieldC = src[3];
    sub_710520(&field0, arg1, arg2);
}
