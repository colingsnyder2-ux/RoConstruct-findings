// roc 2010-06 007fe1f0  unit: CXTPControlSelector  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe1f0
//
// 007fe1f0  33c0                 xor eax, eax
// 007fe1f2  39057c5dc200         cmp dword ptr [0xc25d7c], eax
// 007fe1f8  0f95c0               setne al
// 007fe1fb  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000012@ns_ROCX000012@@YAHXZ)

namespace ns_ROCX000012 {
extern int g_008c8f54;

int fn_ROCX000012()
{
    return g_008c8f54 != 0;
}
}
