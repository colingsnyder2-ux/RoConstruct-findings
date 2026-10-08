// roc 2007-03 007768c0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007768c0
//
// 007768c0  e8fbc8eeff           call 0x6631c0
// 007768c5  50                   push eax
// 007768c6  e84384eaff           call 0x61ed0e
// 007768cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007768c0();
extern int __stdcall G2_func_007768c0(int);
int func_007768c0()
{
    return G2_func_007768c0(G1_func_007768c0());
}
