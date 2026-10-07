// roc 2009-06 00893140  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893140
//
// 00893140  e8dba9edff           call 0x76db20
// 00893145  50                   push eax
// 00893146  e8ad62e8ff           call 0x7193f8
// 0089314b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893140();
extern int __stdcall G2_func_00893140(int);
int func_00893140()
{
    return G2_func_00893140(G1_func_00893140());
}
