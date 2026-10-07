// roc 2007-08 00778960  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778960
//
// 00778960  b948eb8b00           mov ecx, 0x8beb48
// 00778965  e9a6ecc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778960 { void m(); };
extern T_func_00778960 G1_func_00778960;
void func_00778960()
{
    G1_func_00778960.m();
}
