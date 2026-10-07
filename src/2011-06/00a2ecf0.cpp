// roc 2011-06 00a2ecf0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ecf0
//
// 00a2ecf0  e81b77deff           call 0x816410
// 00a2ecf5  50                   push eax
// 00a2ecf6  e823bdddff           call 0x80aa1e
// 00a2ecfb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ecf0();
extern int __stdcall G2_func_00a2ecf0(int);
int func_00a2ecf0()
{
    return G2_func_00a2ecf0(G1_func_00a2ecf0());
}
