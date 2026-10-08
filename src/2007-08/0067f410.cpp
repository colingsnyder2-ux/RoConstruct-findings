// from server: 100% by colin
// roc 2007-08 0067f410  unit: CXTPControlSelector  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f410
//
// 0067f410  8b4108               mov eax, dword ptr [ecx + 8]
// 0067f413  85c0                 test eax, eax
// 0067f415  7402                 je 0x67f419
// 0067f417  ffe0                 jmp eax
// 0067f419  33c0                 xor eax, eax
// 0067f41b  c21800               ret 0x18

struct CXTPControlSelector
{
    int field_0;
    int field_4;
    int (__stdcall *field_8)(int, int, int, int, int, int);
    int method(int, int, int, int, int, int);
};

int CXTPControlSelector::method(int a, int b, int c, int d, int e, int f)
{
    int (__stdcall *p)(int, int, int, int, int, int) = field_8;
    if (p != 0)
        return p(a, b, c, d, e, f);
    return 0;
}
