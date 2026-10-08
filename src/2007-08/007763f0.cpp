// roc 2007-08 007763f0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007763f0
//
// 007763f0  e8abc1eeff           call 0x6625a0
// 007763f5  50                   push eax
// 007763f6  e8f5a0ebff           call 0x6304f0
// 007763fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007763f0();
extern int __stdcall G2_func_007763f0(int);
int func_007763f0()
{
    return G2_func_007763f0(G1_func_007763f0());
}
