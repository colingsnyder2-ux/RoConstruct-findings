// roc 2007-08 00778560  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778560
//
// 00778560  b948e18b00           mov ecx, 0x8be148
// 00778565  e9a6f0c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778560 { void m(); };
extern T_func_00778560 G1_func_00778560;
void func_00778560()
{
    G1_func_00778560.m();
}
