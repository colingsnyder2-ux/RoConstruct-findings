// roc 2009-06 00893220  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893220
//
// 00893220  e86bb7f2ff           call 0x7be990
// 00893225  50                   push eax
// 00893226  e8cd61e8ff           call 0x7193f8
// 0089322b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893220();
extern int __stdcall G2_func_00893220(int);
int func_00893220()
{
    return G2_func_00893220(G1_func_00893220());
}
