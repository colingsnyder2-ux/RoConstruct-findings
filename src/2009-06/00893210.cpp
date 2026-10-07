// roc 2009-06 00893210  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893210
//
// 00893210  e84b47f2ff           call 0x7b7960
// 00893215  50                   push eax
// 00893216  e8dd61e8ff           call 0x7193f8
// 0089321b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893210();
extern int __stdcall G2_func_00893210(int);
int func_00893210()
{
    return G2_func_00893210(G1_func_00893210());
}
