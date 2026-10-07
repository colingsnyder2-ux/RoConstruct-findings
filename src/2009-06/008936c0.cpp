// roc 2009-06 008936c0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008936c0
//
// 008936c0  e80bfbf7ff           call 0x8131d0
// 008936c5  50                   push eax
// 008936c6  e82d5de8ff           call 0x7193f8
// 008936cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008936c0();
extern int __stdcall G2_func_008936c0(int);
int func_008936c0()
{
    return G2_func_008936c0(G1_func_008936c0());
}
