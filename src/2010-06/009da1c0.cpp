// roc 2010-06 009da1c0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da1c0
//
// 009da1c0  e89ba4ecff           call 0x8a4660
// 009da1c5  50                   push eax
// 009da1c6  e895e1dcff           call 0x7a8360
// 009da1cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da1c0();
extern int __stdcall G2_func_009da1c0(int);
int func_009da1c0()
{
    return G2_func_009da1c0(G1_func_009da1c0());
}
