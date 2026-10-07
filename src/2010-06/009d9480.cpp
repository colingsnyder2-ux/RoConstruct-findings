// roc 2010-06 009d9480  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9480
//
// 009d9480  e85b0bddff           call 0x7a9fe0
// 009d9485  50                   push eax
// 009d9486  e8d5eedcff           call 0x7a8360
// 009d948b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9480();
extern int __stdcall G2_func_009d9480(int);
int func_009d9480()
{
    return G2_func_009d9480(G1_func_009d9480());
}
