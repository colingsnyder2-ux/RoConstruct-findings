// roc 2007-03 007768d0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007768d0
//
// 007768d0  e81bceeeff           call 0x6636f0
// 007768d5  50                   push eax
// 007768d6  e83384eaff           call 0x61ed0e
// 007768db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007768d0();
extern int __stdcall G2_func_007768d0(int);
int func_007768d0()
{
    return G2_func_007768d0(G1_func_007768d0());
}
