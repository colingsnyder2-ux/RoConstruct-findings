// roc 2007-03 00776a60  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776a60
//
// 00776a60  e86b13f2ff           call 0x697dd0
// 00776a65  50                   push eax
// 00776a66  e8a382eaff           call 0x61ed0e
// 00776a6b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a60();
extern int __stdcall G2_func_00776a60(int);
int func_00776a60()
{
    return G2_func_00776a60(G1_func_00776a60());
}
