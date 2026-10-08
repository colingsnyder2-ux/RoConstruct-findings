// roc 2007-03 00776a70  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776a70
//
// 00776a70  e80b2ff2ff           call 0x699980
// 00776a75  50                   push eax
// 00776a76  e89382eaff           call 0x61ed0e
// 00776a7b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a70();
extern int __stdcall G2_func_00776a70(int);
int func_00776a70()
{
    return G2_func_00776a70(G1_func_00776a70());
}
