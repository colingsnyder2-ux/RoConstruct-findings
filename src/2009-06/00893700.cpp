// roc 2009-06 00893700  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893700
//
// 00893700  e86b27f8ff           call 0x815e70
// 00893705  50                   push eax
// 00893706  e8ed5ce8ff           call 0x7193f8
// 0089370b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893700();
extern int __stdcall G2_func_00893700(int);
int func_00893700()
{
    return G2_func_00893700(G1_func_00893700());
}
