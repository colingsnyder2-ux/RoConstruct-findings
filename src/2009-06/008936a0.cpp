// roc 2009-06 008936a0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008936a0
//
// 008936a0  e85bb3f7ff           call 0x80ea00
// 008936a5  50                   push eax
// 008936a6  e84d5de8ff           call 0x7193f8
// 008936ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008936a0();
extern int __stdcall G2_func_008936a0(int);
int func_008936a0()
{
    return G2_func_008936a0(G1_func_008936a0());
}
