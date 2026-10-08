// roc 2007-08 007763c0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007763c0
//
// 007763c0  e80bbfeeff           call 0x6622d0
// 007763c5  50                   push eax
// 007763c6  e825a1ebff           call 0x6304f0
// 007763cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007763c0();
extern int __stdcall G2_func_007763c0(int);
int func_007763c0()
{
    return G2_func_007763c0(G1_func_007763c0());
}
