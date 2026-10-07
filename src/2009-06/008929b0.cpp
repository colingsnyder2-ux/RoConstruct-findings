// roc 2009-06 008929b0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008929b0
//
// 008929b0  e86b8ae8ff           call 0x71b420
// 008929b5  50                   push eax
// 008929b6  e83d6ae8ff           call 0x7193f8
// 008929bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008929b0();
extern int __stdcall G2_func_008929b0(int);
int func_008929b0()
{
    return G2_func_008929b0(G1_func_008929b0());
}
