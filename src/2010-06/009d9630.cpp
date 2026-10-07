// roc 2010-06 009d9630  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9630
//
// 009d9630  e83b60e0ff           call 0x7df670
// 009d9635  50                   push eax
// 009d9636  e825eddcff           call 0x7a8360
// 009d963b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9630();
extern int __stdcall G2_func_009d9630(int);
int func_009d9630()
{
    return G2_func_009d9630(G1_func_009d9630());
}
