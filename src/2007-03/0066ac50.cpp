// roc 2007-03 0066ac50  unit: seg_00660000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ac50
//
// 0066ac50  8b4108               mov eax, dword ptr [ecx + 8]
// 0066ac53  85c0                 test eax, eax
// 0066ac55  7402                 je 0x66ac59
// 0066ac57  ffe0                 jmp eax
// 0066ac59  33c0                 xor eax, eax
// 0066ac5b  c21800               ret 0x18
// copied from an identical function in another client (function ?method@CXTPControlSelector@ns_ROCX000025@@QAEHHHHHHH@Z)

namespace ns_ROCX000025 {
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
}
