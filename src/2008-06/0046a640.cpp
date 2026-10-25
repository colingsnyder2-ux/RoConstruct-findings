// from server: 100% by tester
// roc 2008-06 0046a640  unit: CWebToolbox  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a640
//
// 0046a640  56                   push esi
// 0046a641  8bf1                 mov esi, ecx
// 0046a643  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0046a649  85c9                 test ecx, ecx
// 0046a64b  7405                 je 0x46a652
// 0046a64d  e8d6632300           call 0x6a0a28
// 0046a652  6a00                 push 0
// 0046a654  8bce                 mov ecx, esi
// 0046a656  e8db642300           call 0x6a0b36
// 0046a65b  5e                   pop esi
// 0046a65c  c20400               ret 4

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
