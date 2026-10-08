// roc 2007-08 00776a00  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a00
//
// 00776a00  e83b2ff1ff           call 0x689940
// 00776a05  50                   push eax
// 00776a06  e8e59aebff           call 0x6304f0
// 00776a0b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a00();
extern int __stdcall G2_func_00776a00(int);
int func_00776a00()
{
    return G2_func_00776a00(G1_func_00776a00());
}
