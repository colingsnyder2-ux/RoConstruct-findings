// roc 2010-06 009da1f0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da1f0
//
// 009da1f0  e8bbb9ecff           call 0x8a5bb0
// 009da1f5  50                   push eax
// 009da1f6  e865e1dcff           call 0x7a8360
// 009da1fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da1f0();
extern int __stdcall G2_func_009da1f0(int);
int func_009da1f0()
{
    return G2_func_009da1f0(G1_func_009da1f0());
}
