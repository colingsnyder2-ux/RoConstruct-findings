// roc 2009-06 008930f0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008930f0
//
// 008930f0  e8bba8edff           call 0x76d9b0
// 008930f5  50                   push eax
// 008930f6  e8fd62e8ff           call 0x7193f8
// 008930fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008930f0();
extern int __stdcall G2_func_008930f0(int);
int func_008930f0()
{
    return G2_func_008930f0(G1_func_008930f0());
}
