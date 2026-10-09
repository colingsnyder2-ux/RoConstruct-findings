// roc 2011-06 0085bc00  unit: CXTPControlSelector  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085bc00
//
// 0085bc00  33c0                 xor eax, eax
// 0085bc02  3905608ad100         cmp dword ptr [0xd18a60], eax
// 0085bc08  0f95c0               setne al
// 0085bc0b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00003e@ns_ROCX00003e@@YAHXZ)

namespace ns_ROCX00003e {
extern int g_008c8f54;

int fn_ROCX00003e()
{
    return g_008c8f54 != 0;
}
}
