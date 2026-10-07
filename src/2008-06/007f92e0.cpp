// roc 2008-06 007f92e0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f92e0
//
// 007f92e0  e8cbf5edff           call 0x6d88b0
// 007f92e5  50                   push eax
// 007f92e6  e89b7ceaff           call 0x6a0f86
// 007f92eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f92e0();
extern int __stdcall G2_func_007f92e0(int);
int func_007f92e0()
{
    return G2_func_007f92e0(G1_func_007f92e0());
}
