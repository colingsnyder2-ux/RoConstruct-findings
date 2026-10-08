// from server: 81% by colin
// roc 2007-08 004667a0  unit: CWebToolbox  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004667a0
//
// 004667a0  56                   push esi
// 004667a1  8bf1                 mov esi, ecx
// 004667a3  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 004667a9  85c9                 test ecx, ecx
// 004667ab  7405                 je 0x4667b2
// 004667ad  e852981c00           call 0x630004
// 004667b2  6a00                 push 0
// 004667b4  8bce                 mov ecx, esi
// 004667b6  e863991c00           call 0x63011e
// 004667bb  5e                   pop esi
// 004667bc  c20400               ret 4

struct CWebToolbox {
    char pad[0xf4];
    void* field_f4;
    void sub_630004();
    void sub_63011e(int);
    void func(int);
};

void CWebToolbox::func(int arg) {
    if (field_f4 != 0) {
        sub_630004();
    }
    sub_63011e(0);
}
