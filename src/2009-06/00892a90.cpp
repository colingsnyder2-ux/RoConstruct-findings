// roc 2009-06 00892a90  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892a90
//
// 00892a90  e8bb75eaff           call 0x73a050
// 00892a95  50                   push eax
// 00892a96  e85d69e8ff           call 0x7193f8
// 00892a9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892a90();
extern int __stdcall G2_func_00892a90(int);
int func_00892a90()
{
    return G2_func_00892a90(G1_func_00892a90());
}
