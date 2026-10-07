// roc 2009-06 00893730  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893730
//
// 00893730  e88b28f8ff           call 0x815fc0
// 00893735  50                   push eax
// 00893736  e8bd5ce8ff           call 0x7193f8
// 0089373b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893730();
extern int __stdcall G2_func_00893730(int);
int func_00893730()
{
    return G2_func_00893730(G1_func_00893730());
}
