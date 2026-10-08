// roc 2007-03 00776aa0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776aa0
//
// 00776aa0  e8fb8cf2ff           call 0x69f7a0
// 00776aa5  50                   push eax
// 00776aa6  e86382eaff           call 0x61ed0e
// 00776aab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776aa0();
extern int __stdcall G2_func_00776aa0(int);
int func_00776aa0()
{
    return G2_func_00776aa0(G1_func_00776aa0());
}
