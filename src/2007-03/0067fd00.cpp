// roc 2007-03 0067fd00  unit: seg_00670000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067fd00
//
// 0067fd00  8b442408             mov eax, dword ptr [esp + 8]
// 0067fd04  50                   push eax
// 0067fd05  e8f6f4ffff           call 0x67f200
// 0067fd0a  33c0                 xor eax, eax
// 0067fd0c  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTPStatusBar@ns_ROCX000000@@QAEHHH@Z)

namespace ns_ROCX000000 {
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
