// roc 2009-12 00862c60  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862c60
//
// 00862c60  8b442408             mov eax, dword ptr [esp + 8]
// 00862c64  50                   push eax
// 00862c65  e846f4ffff           call 0x8620b0
// 00862c6a  33c0                 xor eax, eax
// 00862c6c  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTPStatusBar@ns_ROCX00001e@@QAEHHH@Z)

namespace ns_ROCX00001e {
struct CXTPStatusBar
{
    char pad[0x128];
    int field_0x128;
    int method(int, int);
};

extern "C" int __stdcall helper_77dd6c(int);

int CXTPStatusBar::method(int a, int b)
{
    helper_77dd6c(b);
    return 0;
}
}
