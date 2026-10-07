// roc 2010-06 009da1b0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da1b0
//
// 009da1b0  e85b8decff           call 0x8a2f10
// 009da1b5  50                   push eax
// 009da1b6  e8a5e1dcff           call 0x7a8360
// 009da1bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da1b0();
extern int __stdcall G2_func_009da1b0(int);
int func_009da1b0()
{
    return G2_func_009da1b0(G1_func_009da1b0());
}
