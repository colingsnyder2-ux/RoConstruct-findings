// roc 2009-06 008936b0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008936b0
//
// 008936b0  e86bc2f7ff           call 0x80f920
// 008936b5  50                   push eax
// 008936b6  e83d5de8ff           call 0x7193f8
// 008936bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008936b0();
extern int __stdcall G2_func_008936b0(int);
int func_008936b0()
{
    return G2_func_008936b0(G1_func_008936b0());
}
