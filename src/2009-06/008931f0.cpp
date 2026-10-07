// roc 2009-06 008931f0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008931f0
//
// 008931f0  e86b28f2ff           call 0x7b5a60
// 008931f5  50                   push eax
// 008931f6  e8fd61e8ff           call 0x7193f8
// 008931fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008931f0();
extern int __stdcall G2_func_008931f0(int);
int func_008931f0()
{
    return G2_func_008931f0(G1_func_008931f0());
}
