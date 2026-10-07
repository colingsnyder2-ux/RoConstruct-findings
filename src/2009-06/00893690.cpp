// roc 2009-06 00893690  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893690
//
// 00893690  e8bbb0f7ff           call 0x80e750
// 00893695  50                   push eax
// 00893696  e85d5de8ff           call 0x7193f8
// 0089369b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893690();
extern int __stdcall G2_func_00893690(int);
int func_00893690()
{
    return G2_func_00893690(G1_func_00893690());
}
