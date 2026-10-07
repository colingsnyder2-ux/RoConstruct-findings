// roc 2009-06 00893750  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893750
//
// 00893750  e81b3bf8ff           call 0x817270
// 00893755  50                   push eax
// 00893756  e89d5ce8ff           call 0x7193f8
// 0089375b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893750();
extern int __stdcall G2_func_00893750(int);
int func_00893750()
{
    return G2_func_00893750(G1_func_00893750());
}
