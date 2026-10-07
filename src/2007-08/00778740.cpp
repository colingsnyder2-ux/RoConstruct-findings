// roc 2007-08 00778740  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778740
//
// 00778740  b908e58b00           mov ecx, 0x8be508
// 00778745  e9a620d2ff           jmp 0x49a7f0
// auto-matched from its assembly shape

struct T_func_00778740 { void m(); };
extern T_func_00778740 G1_func_00778740;
void func_00778740()
{
    G1_func_00778740.m();
}
