// roc 2010-06 009d9bb0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9bb0
//
// 009d9bb0  e87b2ae2ff           call 0x7fc630
// 009d9bb5  50                   push eax
// 009d9bb6  e8a5e7dcff           call 0x7a8360
// 009d9bbb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9bb0();
extern int __stdcall G2_func_009d9bb0(int);
int func_009d9bb0()
{
    return G2_func_009d9bb0(G1_func_009d9bb0());
}
