// from server: 67% by colin
// roc 2007-08 00645360  unit: CXTPControlComboBoxPopupBar  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00645360
//
// 00645360  56                   push esi
// 00645361  57                   push edi
// 00645362  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00645366  8d44240c             lea eax, [esp + 0xc]
// 0064536a  50                   push eax
// 0064536b  8bf1                 mov esi, ecx
// 0064536d  c70700000000         mov dword ptr [edi], 0
// 00645373  e858c00200           call 0x6713d0
// 00645378  8bd0                 mov edx, eax
// 0064537a  85d2                 test edx, edx
// 0064537c  7e24                 jle 0x6453a2
// 0064537e  8d4ea4               lea ecx, [esi - 0x5c]
// 00645381  e88af3ffff           call 0x644710
// 00645386  3bd0                 cmp edx, eax
// 00645388  7f18                 jg 0x6453a2
// 0064538a  83c2ff               add edx, -1
// 0064538d  52                   push edx
// 0064538e  e88df3ffff           call 0x644720
// 00645393  85c0                 test eax, eax
// 00645395  740b                 je 0x6453a2
// 00645397  6a01                 push 1
// 00645399  8bc8                 mov ecx, eax
// 0064539b  e824300f00           call 0x7383c4
// 006453a0  8907                 mov dword ptr [edi], eax
// 006453a2  5f                   pop edi
// 006453a3  33c0                 xor eax, eax
// 006453a5  5e                   pop esi
// 006453a6  c21400               ret 0x14

struct CXTPControlComboBoxPopupBar {
    int sub_644710();
    int sub_644720(int);
    int sub_6713d0(int*);
    int sub_7383c4(int);
    int f(int, int, int, int, int*);
};

int CXTPControlComboBoxPopupBar::f(int, int, int, int, int* p) {
    int v;
    *p = 0;
    int n = sub_6713d0(&v);
    if (n > 0) {
        int m = sub_644710();
        if (n <= m) {
            int* r = (int*)sub_644720(n - 1);
            if (r != 0) {
                *p = sub_7383c4(1);
            }
        }
    }
    return 0;
}
