// roc 2007-03 00776940  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776940
//
// 00776940  e88bfcefff           call 0x6765d0
// 00776945  50                   push eax
// 00776946  e8c383eaff           call 0x61ed0e
// 0077694b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776940();
extern int __stdcall G2_func_00776940(int);
int func_00776940()
{
    return G2_func_00776940(G1_func_00776940());
}
