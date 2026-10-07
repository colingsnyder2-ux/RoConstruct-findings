// roc 2009-06 008936f0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008936f0
//
// 008936f0  e83b27f8ff           call 0x815e30
// 008936f5  50                   push eax
// 008936f6  e8fd5ce8ff           call 0x7193f8
// 008936fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008936f0();
extern int __stdcall G2_func_008936f0(int);
int func_008936f0()
{
    return G2_func_008936f0(G1_func_008936f0());
}
