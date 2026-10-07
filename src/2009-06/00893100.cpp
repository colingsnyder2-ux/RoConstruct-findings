// roc 2009-06 00893100  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893100
//
// 00893100  e8bba8edff           call 0x76d9c0
// 00893105  50                   push eax
// 00893106  e8ed62e8ff           call 0x7193f8
// 0089310b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893100();
extern int __stdcall G2_func_00893100(int);
int func_00893100()
{
    return G2_func_00893100(G1_func_00893100());
}
