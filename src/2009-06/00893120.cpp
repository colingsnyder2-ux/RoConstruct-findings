// roc 2009-06 00893120  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893120
//
// 00893120  e83ba9edff           call 0x76da60
// 00893125  50                   push eax
// 00893126  e8cd62e8ff           call 0x7193f8
// 0089312b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893120();
extern int __stdcall G2_func_00893120(int);
int func_00893120()
{
    return G2_func_00893120(G1_func_00893120());
}
