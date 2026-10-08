// roc 2007-08 007762a0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007762a0
//
// 007762a0  e89bffebff           call 0x636240
// 007762a5  50                   push eax
// 007762a6  e845a2ebff           call 0x6304f0
// 007762ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007762a0();
extern int __stdcall G2_func_007762a0(int);
int func_007762a0()
{
    return G2_func_007762a0(G1_func_007762a0());
}
