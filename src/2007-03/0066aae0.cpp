// roc 2007-03 0066aae0  unit: seg_00660000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066aae0
//
// 0066aae0  33c0                 xor eax, eax
// 0066aae2  3905641e8c00         cmp dword ptr [0x8c1e64], eax
// 0066aae8  0f95c0               setne al
// 0066aaeb  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00001e@ns_ROCX00001e@@YAHXZ)

namespace ns_ROCX00001e {
extern int g_008c8f54;

int fn_ROCX00001e()
{
    return g_008c8f54 != 0;
}
}
