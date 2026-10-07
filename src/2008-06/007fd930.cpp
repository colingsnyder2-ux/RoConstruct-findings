// roc 2008-06 007fd930  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd930
//
// 007fd930  b928599700           mov ecx, 0x975928
// 007fd935  e986d2c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd930 { void m(); };
extern T_func_007fd930 G1_func_007fd930;
void func_007fd930()
{
    G1_func_007fd930.m();
}
