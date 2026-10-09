// roc 2007-03 006eb680  unit: seg_006e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006eb680
//
// 006eb680  8b442404             mov eax, dword ptr [esp + 4]
// 006eb684  8b8920010000         mov ecx, dword ptr [ecx + 0x120]
// 006eb68a  6a00                 push 0
// 006eb68c  50                   push eax
// 006eb68d  e8ced2f8ff           call 0x678960
// 006eb692  33c0                 xor eax, eax
// 006eb694  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTColorHex@ns_ROCX0000b1@@QAEHHH@Z)

namespace ns_ROCX0000b1 {
struct CHexHelper {
    int __thiscall invoke(int a, int b);
};

struct CXTColorHex {
    char pad[0x120];
    CHexHelper* helper;
    int method(int a, int b);
};

int CXTColorHex::method(int a, int b) {
    helper->invoke(a, 0);
    return 0;
}
}
