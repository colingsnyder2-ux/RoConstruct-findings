// roc 2008-06 006f6a10  unit: CXTPControlSelector  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6a10
//
// 006f6a10  33c0                 xor eax, eax
// 006f6a12  3905fce89700         cmp dword ptr [0x97e8fc], eax
// 006f6a18  0f95c0               setne al
// 006f6a1b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00004b@ns_ROCX00004b@@YAHXZ)

namespace ns_ROCX00004b {
extern int g_008c8f54;

int fn_ROCX00004b()
{
    return g_008c8f54 != 0;
}
}
