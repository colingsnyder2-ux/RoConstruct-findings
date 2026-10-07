// roc 2009-06 00893710  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893710
//
// 00893710  e8cb27f8ff           call 0x815ee0
// 00893715  50                   push eax
// 00893716  e8dd5ce8ff           call 0x7193f8
// 0089371b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893710();
extern int __stdcall G2_func_00893710(int);
int func_00893710()
{
    return G2_func_00893710(G1_func_00893710());
}
