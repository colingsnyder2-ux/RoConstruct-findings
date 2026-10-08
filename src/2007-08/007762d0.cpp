// roc 2007-08 007762d0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007762d0
//
// 007762d0  e85bd3ecff           call 0x643630
// 007762d5  50                   push eax
// 007762d6  e815a2ebff           call 0x6304f0
// 007762db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007762d0();
extern int __stdcall G2_func_007762d0(int);
int func_007762d0()
{
    return G2_func_007762d0(G1_func_007762d0());
}
