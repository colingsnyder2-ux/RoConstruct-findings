// roc 2011-06 00a2ecd0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ecd0
//
// 00a2ecd0  e8fbd9ddff           call 0x80c6d0
// 00a2ecd5  50                   push eax
// 00a2ecd6  e843bdddff           call 0x80aa1e
// 00a2ecdb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ecd0();
extern int __stdcall G2_func_00a2ecd0(int);
int func_00a2ecd0()
{
    return G2_func_00a2ecd0(G1_func_00a2ecd0());
}
