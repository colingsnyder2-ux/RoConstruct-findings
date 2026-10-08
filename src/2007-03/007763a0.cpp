// roc 2007-03 007763a0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007763a0
//
// 007763a0  e8bb80eeff           call 0x65e460
// 007763a5  50                   push eax
// 007763a6  e86389eaff           call 0x61ed0e
// 007763ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007763a0();
extern int __stdcall G2_func_007763a0(int);
int func_007763a0()
{
    return G2_func_007763a0(G1_func_007763a0());
}
