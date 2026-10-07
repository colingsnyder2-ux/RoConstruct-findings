// roc 2010-06 009d9b80  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9b80
//
// 009d9b80  e81b70e1ff           call 0x7f0ba0
// 009d9b85  50                   push eax
// 009d9b86  e8d5e7dcff           call 0x7a8360
// 009d9b8b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9b80();
extern int __stdcall G2_func_009d9b80(int);
int func_009d9b80()
{
    return G2_func_009d9b80(G1_func_009d9b80());
}
