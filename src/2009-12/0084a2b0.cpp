// roc 2009-12 0084a2b0  unit: CXTPControlSelector  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a2b0
//
// 0084a2b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0084a2b3  85c0                 test eax, eax
// 0084a2b5  7402                 je 0x84a2b9
// 0084a2b7  ffe0                 jmp eax
// 0084a2b9  33c0                 xor eax, eax
// 0084a2bb  c21800               ret 0x18
// copied from an identical function in another client (function ?method@CXTPControlSelector@ns_ROCX000000@@QAEHHHHHHH@Z)

namespace ns_ROCX000000 {
// from server: 100% by why2
struct CXTPControlSelector {
    char pad[0xc];
    int (__stdcall *field_0xc)(int, int, int, int, int, int);
    int method(int a, int b, int c, int d, int e, int f);
};

int CXTPControlSelector::method(int a, int b, int c, int d, int e, int f)
{
    int (__stdcall *p)(int, int, int, int, int, int) = field_0xc;
    if (p != 0)
        return p(a, b, c, d, e, f);
    return 0;
}
}
