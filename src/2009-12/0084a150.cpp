// roc 2009-12 0084a150  unit: CXTPControlSelector  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a150
//
// 0084a150  33c0                 xor eax, eax
// 0084a152  39054cb6b900         cmp dword ptr [0xb9b64c], eax
// 0084a158  0f95c0               setne al
// 0084a15b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000016@ns_ROCX000016@@YAHXZ)

namespace ns_ROCX000016 {
extern int g_008c8f54;

int fn_ROCX000016()
{
    return g_008c8f54 != 0;
}
}
