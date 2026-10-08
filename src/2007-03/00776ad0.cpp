// roc 2007-03 00776ad0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776ad0
//
// 00776ad0  e86be3f3ff           call 0x6b4e40
// 00776ad5  50                   push eax
// 00776ad6  e83382eaff           call 0x61ed0e
// 00776adb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776ad0();
extern int __stdcall G2_func_00776ad0(int);
int func_00776ad0()
{
    return G2_func_00776ad0(G1_func_00776ad0());
}
