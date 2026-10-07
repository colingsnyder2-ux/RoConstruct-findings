// roc 2009-06 008929c0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008929c0
//
// 008929c0  e8bb8be8ff           call 0x71b580
// 008929c5  50                   push eax
// 008929c6  e82d6ae8ff           call 0x7193f8
// 008929cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008929c0();
extern int __stdcall G2_func_008929c0(int);
int func_008929c0()
{
    return G2_func_008929c0(G1_func_008929c0());
}
