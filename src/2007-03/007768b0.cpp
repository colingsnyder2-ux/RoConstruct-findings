// roc 2007-03 007768b0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007768b0
//
// 007768b0  e8bb7ceeff           call 0x65e570
// 007768b5  50                   push eax
// 007768b6  e85384eaff           call 0x61ed0e
// 007768bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007768b0();
extern int __stdcall G2_func_007768b0(int);
int func_007768b0()
{
    return G2_func_007768b0(G1_func_007768b0());
}
