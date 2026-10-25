// from server: 100% by atomic.potato
// roc 2008-06 0046a6f0  unit: CWebToolbox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a6f0
//
// 0046a6f0  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 0046a6f6  85c9                 test ecx, ecx
// 0046a6f8  7405                 je 0x46a6ff
// 0046a6fa  e829632300           call 0x6a0a28
// 0046a6ff  b803000000           mov eax, 3
// 0046a704  c20c00               ret 0xc

struct CWebToolbox
{
    char pad[0xf8];
    void* field_f8;
    int func_0046a6f0(int, int, int);
    void sub_006a0a28();
};

int CWebToolbox::func_0046a6f0(int, int, int)
{
    if (field_f8 != 0) {
        ((CWebToolbox*)field_f8)->sub_006a0a28();
    }
    return 3;
}
