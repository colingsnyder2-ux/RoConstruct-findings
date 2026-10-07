// roc 2010-06 009da1e0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da1e0
//
// 009da1e0  e88bb9ecff           call 0x8a5b70
// 009da1e5  50                   push eax
// 009da1e6  e875e1dcff           call 0x7a8360
// 009da1eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da1e0();
extern int __stdcall G2_func_009da1e0(int);
int func_009da1e0()
{
    return G2_func_009da1e0(G1_func_009da1e0());
}
