// roc 2011-06 00a2f9c0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f9c0
//
// 00a2f9c0  e8eb71ecff           call 0x8f6bb0
// 00a2f9c5  50                   push eax
// 00a2f9c6  e853b0ddff           call 0x80aa1e
// 00a2f9cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f9c0();
extern int __stdcall G2_func_00a2f9c0(int);
int func_00a2f9c0()
{
    return G2_func_00a2f9c0(G1_func_00a2f9c0());
}
