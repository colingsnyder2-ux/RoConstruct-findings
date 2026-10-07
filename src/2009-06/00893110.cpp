// roc 2009-06 00893110  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893110
//
// 00893110  e8dba8edff           call 0x76d9f0
// 00893115  50                   push eax
// 00893116  e8dd62e8ff           call 0x7193f8
// 0089311b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893110();
extern int __stdcall G2_func_00893110(int);
int func_00893110()
{
    return G2_func_00893110(G1_func_00893110());
}
