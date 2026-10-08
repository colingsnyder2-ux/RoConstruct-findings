// roc 2007-03 007762f0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007762f0
//
// 007762f0  e8eb26ecff           call 0x6389e0
// 007762f5  50                   push eax
// 007762f6  e8138aeaff           call 0x61ed0e
// 007762fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007762f0();
extern int __stdcall G2_func_007762f0(int);
int func_007762f0()
{
    return G2_func_007762f0(G1_func_007762f0());
}
