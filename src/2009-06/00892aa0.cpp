// roc 2009-06 00892aa0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892aa0
//
// 00892aa0  e81bc7eaff           call 0x73f1c0
// 00892aa5  50                   push eax
// 00892aa6  e84d69e8ff           call 0x7193f8
// 00892aab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892aa0();
extern int __stdcall G2_func_00892aa0(int);
int func_00892aa0()
{
    return G2_func_00892aa0(G1_func_00892aa0());
}
