// from server: 100% by tester
// roc 2008-06 0046a660  unit: CWebToolbox  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a660
//
// 0046a660  56                   push esi
// 0046a661  8bf1                 mov esi, ecx
// 0046a663  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0046a669  85c9                 test ecx, ecx
// 0046a66b  7405                 je 0x46a672
// 0046a66d  e8b6632300           call 0x6a0a28
// 0046a672  6a00                 push 0
// 0046a674  8bce                 mov ecx, esi
// 0046a676  e8c1642300           call 0x6a0b3c
// 0046a67b  5e                   pop esi
// 0046a67c  c20400               ret 4

struct CWebToolbox {
    char pad[0xf8];
    void* field_f4;
    void sub_630004();
    void sub_63011e(int);
    void func_004667a0(int);
};

void CWebToolbox::func_004667a0(int arg)
{
    if (field_f4 != 0) {
        ((CWebToolbox*)field_f4)->sub_630004();
    }
    sub_63011e(0);
}
