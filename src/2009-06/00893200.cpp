// roc 2009-06 00893200  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893200
//
// 00893200  e82b45f2ff           call 0x7b7730
// 00893205  50                   push eax
// 00893206  e8ed61e8ff           call 0x7193f8
// 0089320b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893200();
extern int __stdcall G2_func_00893200(int);
int func_00893200()
{
    return G2_func_00893200(G1_func_00893200());
}
