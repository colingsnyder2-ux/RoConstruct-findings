// roc 2007-03 00776210  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776210
//
// 00776210  e89ba7eaff           call 0x6209b0
// 00776215  50                   push eax
// 00776216  e8f38aeaff           call 0x61ed0e
// 0077621b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776210();
extern int __stdcall G2_func_00776210(int);
int func_00776210()
{
    return G2_func_00776210(G1_func_00776210());
}
