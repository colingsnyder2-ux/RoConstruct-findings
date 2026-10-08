// roc 2007-03 00776ac0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776ac0
//
// 00776ac0  e80bb0f3ff           call 0x6b1ad0
// 00776ac5  50                   push eax
// 00776ac6  e84382eaff           call 0x61ed0e
// 00776acb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776ac0();
extern int __stdcall G2_func_00776ac0(int);
int func_00776ac0()
{
    return G2_func_00776ac0(G1_func_00776ac0());
}
