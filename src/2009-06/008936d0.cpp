// roc 2009-06 008936d0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008936d0
//
// 008936d0  e85b12f8ff           call 0x814930
// 008936d5  50                   push eax
// 008936d6  e81d5de8ff           call 0x7193f8
// 008936db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008936d0();
extern int __stdcall G2_func_008936d0(int);
int func_008936d0()
{
    return G2_func_008936d0(G1_func_008936d0());
}
