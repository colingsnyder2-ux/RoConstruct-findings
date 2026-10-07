// roc 2009-06 00893170  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893170
//
// 00893170  e89b6deeff           call 0x779f10
// 00893175  50                   push eax
// 00893176  e87d62e8ff           call 0x7193f8
// 0089317b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893170();
extern int __stdcall G2_func_00893170(int);
int func_00893170()
{
    return G2_func_00893170(G1_func_00893170());
}
