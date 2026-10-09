// roc 2009-12 0097c5a0  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c5a0
//
// 0097c5a0  e8eb7be8ff           call 0x804190
// 0097c5a5  50                   push eax
// 0097c5a6  e8757ce7ff           call 0x7f4220
// 0097c5ab  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX0000e8@ns_ROCX0000e8@@YAHXZ)

namespace ns_ROCX0000e8 {
extern int G1_func_008929a0();
extern int __stdcall G2_func_008929a0(int);
int fn_ROCX0000e8()
{
    return G2_func_008929a0(G1_func_008929a0());
}
}
