// roc 2009-06 008929d0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008929d0
//
// 008929d0  e8abcee8ff           call 0x71f880
// 008929d5  50                   push eax
// 008929d6  e81d6ae8ff           call 0x7193f8
// 008929db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008929d0();
extern int __stdcall G2_func_008929d0(int);
int func_008929d0()
{
    return G2_func_008929d0(G1_func_008929d0());
}
