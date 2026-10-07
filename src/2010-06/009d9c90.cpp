// roc 2010-06 009d9c90  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c90
//
// 009d9c90  e8aba8e4ff           call 0x824540
// 009d9c95  50                   push eax
// 009d9c96  e8c5e6dcff           call 0x7a8360
// 009d9c9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9c90();
extern int __stdcall G2_func_009d9c90(int);
int func_009d9c90()
{
    return G2_func_009d9c90(G1_func_009d9c90());
}
