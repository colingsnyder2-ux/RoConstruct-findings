// roc 2007-03 00776910  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776910
//
// 00776910  e89beeefff           call 0x6757b0
// 00776915  50                   push eax
// 00776916  e8f383eaff           call 0x61ed0e
// 0077691b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776910();
extern int __stdcall G2_func_00776910(int);
int func_00776910()
{
    return G2_func_00776910(G1_func_00776910());
}
