// roc 2009-06 00893130  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893130
//
// 00893130  e87ba9edff           call 0x76dab0
// 00893135  50                   push eax
// 00893136  e8bd62e8ff           call 0x7193f8
// 0089313b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893130();
extern int __stdcall G2_func_00893130(int);
int func_00893130()
{
    return G2_func_00893130(G1_func_00893130());
}
