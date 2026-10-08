// roc 2007-03 00776ab0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776ab0
//
// 00776ab0  e86b90f2ff           call 0x69fb20
// 00776ab5  50                   push eax
// 00776ab6  e85382eaff           call 0x61ed0e
// 00776abb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776ab0();
extern int __stdcall G2_func_00776ab0(int);
int func_00776ab0()
{
    return G2_func_00776ab0(G1_func_00776ab0());
}
