// roc 2007-03 00776970  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776970
//
// 00776970  e82bfdefff           call 0x6766a0
// 00776975  50                   push eax
// 00776976  e89383eaff           call 0x61ed0e
// 0077697b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776970();
extern int __stdcall G2_func_00776970(int);
int func_00776970()
{
    return G2_func_00776970(G1_func_00776970());
}
