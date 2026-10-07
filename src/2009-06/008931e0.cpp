// roc 2009-06 008931e0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008931e0
//
// 008931e0  e86bcff1ff           call 0x7b0150
// 008931e5  50                   push eax
// 008931e6  e80d62e8ff           call 0x7193f8
// 008931eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008931e0();
extern int __stdcall G2_func_008931e0(int);
int func_008931e0()
{
    return G2_func_008931e0(G1_func_008931e0());
}
