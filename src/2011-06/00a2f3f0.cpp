// roc 2011-06 00a2f3f0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f3f0
//
// 00a2f3f0  e80b44e2ff           call 0x853800
// 00a2f3f5  50                   push eax
// 00a2f3f6  e823b6ddff           call 0x80aa1e
// 00a2f3fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f3f0();
extern int __stdcall G2_func_00a2f3f0(int);
int func_00a2f3f0()
{
    return G2_func_00a2f3f0(G1_func_00a2f3f0());
}
