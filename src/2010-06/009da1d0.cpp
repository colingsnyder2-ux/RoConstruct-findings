// roc 2010-06 009da1d0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da1d0
//
// 009da1d0  e8dbb8ecff           call 0x8a5ab0
// 009da1d5  50                   push eax
// 009da1d6  e885e1dcff           call 0x7a8360
// 009da1db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da1d0();
extern int __stdcall G2_func_009da1d0(int);
int func_009da1d0()
{
    return G2_func_009da1d0(G1_func_009da1d0());
}
