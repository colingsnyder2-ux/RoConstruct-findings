// roc 2007-03 00776a80  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776a80
//
// 00776a80  e89b31f2ff           call 0x699c20
// 00776a85  50                   push eax
// 00776a86  e88382eaff           call 0x61ed0e
// 00776a8b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a80();
extern int __stdcall G2_func_00776a80(int);
int func_00776a80()
{
    return G2_func_00776a80(G1_func_00776a80());
}
