// roc 2011-06 00a2eed0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2eed0
//
// 00a2eed0  e81b34e2ff           call 0x8522f0
// 00a2eed5  50                   push eax
// 00a2eed6  e843bbddff           call 0x80aa1e
// 00a2eedb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2eed0();
extern int __stdcall G2_func_00a2eed0(int);
int func_00a2eed0()
{
    return G2_func_00a2eed0(G1_func_00a2eed0());
}
