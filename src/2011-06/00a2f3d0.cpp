// roc 2011-06 00a2f3d0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f3d0
//
// 00a2f3d0  e81b30e2ff           call 0x8523f0
// 00a2f3d5  50                   push eax
// 00a2f3d6  e843b6ddff           call 0x80aa1e
// 00a2f3db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f3d0();
extern int __stdcall G2_func_00a2f3d0(int);
int func_00a2f3d0()
{
    return G2_func_00a2f3d0(G1_func_00a2f3d0());
}
