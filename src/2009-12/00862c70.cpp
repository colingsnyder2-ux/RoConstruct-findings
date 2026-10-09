// roc 2009-12 00862c70  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862c70
//
// 00862c70  8b442408             mov eax, dword ptr [esp + 8]
// 00862c74  50                   push eax
// 00862c75  e896f6ffff           call 0x862310
// 00862c7a  33c0                 xor eax, eax
// 00862c7c  c20800               ret 8
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
