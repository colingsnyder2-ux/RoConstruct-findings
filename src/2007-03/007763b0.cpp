// roc 2007-03 007763b0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007763b0
//
// 007763b0  e88b81eeff           call 0x65e540
// 007763b5  50                   push eax
// 007763b6  e85389eaff           call 0x61ed0e
// 007763bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007763b0();
extern int __stdcall G2_func_007763b0(int);
int func_007763b0()
{
    return G2_func_007763b0(G1_func_007763b0());
}
