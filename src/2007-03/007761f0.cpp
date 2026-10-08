// roc 2007-03 007761f0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007761f0
//
// 007761f0  e81ba1eaff           call 0x620310
// 007761f5  50                   push eax
// 007761f6  e8138beaff           call 0x61ed0e
// 007761fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007761f0();
extern int __stdcall G2_func_007761f0(int);
int func_007761f0()
{
    return G2_func_007761f0(G1_func_007761f0());
}
