// roc 2009-06 0076f3c0  unit: CXTPControlSelector  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076f3c0
//
// 0076f3c0  33c0                 xor eax, eax
// 0076f3c2  3905f421a500         cmp dword ptr [0xa521f4], eax
// 0076f3c8  0f95c0               setne al
// 0076f3cb  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000046@ns_ROCX000046@@YAHXZ)

namespace ns_ROCX000046 {
extern int g_008c8f54;

int fn_ROCX000046()
{
    return g_008c8f54 != 0;
}
}
