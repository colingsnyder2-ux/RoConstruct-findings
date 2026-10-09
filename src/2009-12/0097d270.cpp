// roc 2009-12 0097d270  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097d270
//
// 0097d270  e88be8f6ff           call 0x8ebb00
// 0097d275  50                   push eax
// 0097d276  e8a56fe7ff           call 0x7f4220
// 0097d27b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX0000e8@ns_ROCX0000e8@@YAHXZ)

namespace ns_ROCX0000e8 {
extern int G1_func_008929a0();
extern int __stdcall G2_func_008929a0(int);
int fn_ROCX0000e8()
{
    return G2_func_008929a0(G1_func_008929a0());
}
}
