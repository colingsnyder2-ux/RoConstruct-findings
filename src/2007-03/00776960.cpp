// roc 2007-03 00776960  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776960
//
// 00776960  e8cbfcefff           call 0x676630
// 00776965  50                   push eax
// 00776966  e8a383eaff           call 0x61ed0e
// 0077696b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776960();
extern int __stdcall G2_func_00776960(int);
int func_00776960()
{
    return G2_func_00776960(G1_func_00776960());
}
