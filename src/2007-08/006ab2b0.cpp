// from server: 80% by colin
// roc 2007-08 006ab2b0  unit: CXTPRibbonBar  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ab2b0
//
// 006ab2b0  53                   push ebx
// 006ab2b1  56                   push esi
// 006ab2b2  57                   push edi
// 006ab2b3  8bf9                 mov edi, ecx
// 006ab2b5  33f6                 xor esi, esi
// 006ab2b7  e814f0ffff           call 0x6aa2d0
// 006ab2bc  85c0                 test eax, eax
// 006ab2be  7e26                 jle 0x6ab2e6
// 006ab2c0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006ab2c4  56                   push esi
// 006ab2c5  8bcf                 mov ecx, edi
// 006ab2c7  e864fdffff           call 0x6ab030
// 006ab2cc  53                   push ebx
// 006ab2cd  8bc8                 mov ecx, eax
// 006ab2cf  e84cb20600           call 0x716520
// 006ab2d4  85c0                 test eax, eax
// 006ab2d6  7510                 jne 0x6ab2e8
// 006ab2d8  8bcf                 mov ecx, edi
// 006ab2da  83c601               add esi, 1
// 006ab2dd  e8eeefffff           call 0x6aa2d0
// 006ab2e2  3bf0                 cmp esi, eax
// 006ab2e4  7cde                 jl 0x6ab2c4
// 006ab2e6  33c0                 xor eax, eax
// 006ab2e8  5f                   pop edi
// 006ab2e9  5e                   pop esi
// 006ab2ea  5b                   pop ebx
// 006ab2eb  c20400               ret 4

struct CXTPRibbonBar {
    int GetCount();
    void* GetAt(int index);
    int HitTest(void* pt);
};

int CXTPRibbonBar::HitTest(void* pt) {
    int i = 0;
    if (GetCount() > 0) {
        do {
            void* p = GetAt(i);
            if (HitTest(pt) != 0)
                return i;
            i++;
        } while (i < GetCount());
    }
    return 0;
}
