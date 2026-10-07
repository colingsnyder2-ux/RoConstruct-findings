// roc 2010-06 009da1a0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da1a0
//
// 009da1a0  e8fb5becff           call 0x89fda0
// 009da1a5  50                   push eax
// 009da1a6  e8b5e1dcff           call 0x7a8360
// 009da1ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da1a0();
extern int __stdcall G2_func_009da1a0(int);
int func_009da1a0()
{
    return G2_func_009da1a0(G1_func_009da1a0());
}
