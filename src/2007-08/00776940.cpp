// roc 2007-08 00776940  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776940
//
// 00776940  e83b0af0ff           call 0x677380
// 00776945  50                   push eax
// 00776946  e8a59bebff           call 0x6304f0
// 0077694b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776940();
extern int __stdcall G2_func_00776940(int);
int func_00776940()
{
    return G2_func_00776940(G1_func_00776940());
}
