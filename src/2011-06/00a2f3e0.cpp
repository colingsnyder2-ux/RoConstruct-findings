// roc 2011-06 00a2f3e0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f3e0
//
// 00a2f3e0  e8eb3ee2ff           call 0x8532d0
// 00a2f3e5  50                   push eax
// 00a2f3e6  e833b6ddff           call 0x80aa1e
// 00a2f3eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f3e0();
extern int __stdcall G2_func_00a2f3e0(int);
int func_00a2f3e0()
{
    return G2_func_00a2f3e0(G1_func_00a2f3e0());
}
