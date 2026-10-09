// roc 2008-06 006a1aac  unit: ActiveDocView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a1aac
//
// 006a1aac  33c0                 xor eax, eax
// 006a1aae  40                   inc eax
// 006a1aaf  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000052@ns_ROCX000052@@YAHXZ)

namespace ns_ROCX000052 {
int fn_ROCX000052()
{
    return 1;
}
}
