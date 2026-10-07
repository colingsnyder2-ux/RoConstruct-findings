// roc 2009-06 008929a0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008929a0
//
// 008929a0  e85b86e8ff           call 0x71b000
// 008929a5  50                   push eax
// 008929a6  e84d6ae8ff           call 0x7193f8
// 008929ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008929a0();
extern int __stdcall G2_func_008929a0(int);
int func_008929a0()
{
    return G2_func_008929a0(G1_func_008929a0());
}
