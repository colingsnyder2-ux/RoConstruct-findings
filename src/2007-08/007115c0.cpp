// from server: 84% by colin
// roc 2007-08 007115c0  unit: CXTColorSelectorCtrl  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007115c0
//
// 007115c0  56                   push esi
// 007115c1  57                   push edi
// 007115c2  8bf9                 mov edi, ecx
// 007115c4  8db7c0000000         lea esi, [edi + 0xc0]
// 007115ca  85f6                 test esi, esi
// 007115cc  7426                 je 0x7115f4
// 007115ce  837e2000             cmp dword ptr [esi + 0x20], 0
// 007115d2  7420                 je 0x7115f4
// 007115d4  e8f7f9ffff           call 0x710fd0
// 007115d9  84c0                 test al, al
// 007115db  7517                 jne 0x7115f4
// 007115dd  a18ce07700           mov eax, dword ptr [0x77e08c]
// 007115e2  6a13                 push 0x13
// 007115e4  6a00                 push 0
// 007115e6  6a00                 push 0
// 007115e8  6a00                 push 0
// 007115ea  6a00                 push 0
// 007115ec  50                   push eax
// 007115ed  8bce                 mov ecx, esi
// 007115ef  e83aeaf1ff           call 0x63002e
// 007115f4  8bcf                 mov ecx, edi
// 007115f6  e843ecf1ff           call 0x63023e
// 007115fb  5f                   pop edi
// 007115fc  5e                   pop esi
// 007115fd  c20800               ret 8

struct CXTColorSelectorCtrl {
    char pad[0xc0];
    struct Inner {
        char pad[0x20];
        int field20;
    } inner;
    void sub_7115C0(int, int);
    bool sub_710FD0();
    void sub_63002E(unsigned, int, int, int, int, int);
    void sub_63023E();
};

extern unsigned g_77E08C;

void CXTColorSelectorCtrl::sub_7115C0(int a, int b) {
    Inner* p = &inner;
    if (p != 0 && p->field20 != 0) {
        if (!sub_710FD0()) {
            sub_63002E(g_77E08C, 0, 0, 0, 0, 0x13);
        }
    }
    sub_63023E();
}
