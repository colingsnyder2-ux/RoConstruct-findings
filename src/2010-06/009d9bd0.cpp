// roc 2010-06 009d9bd0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9bd0
//
// 009d9bd0  e82b2ce2ff           call 0x7fc800
// 009d9bd5  50                   push eax
// 009d9bd6  e885e7dcff           call 0x7a8360
// 009d9bdb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9bd0();
extern int __stdcall G2_func_009d9bd0(int);
int func_009d9bd0()
{
    return G2_func_009d9bd0(G1_func_009d9bd0());
}
