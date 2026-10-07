// roc 2008-06 00801910  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801910
//
// 00801910  b9d8f19700           mov ecx, 0x97f1d8
// 00801915  e9d6c5f8ff           jmp 0x78def0
// auto-matched from its assembly shape

struct T_func_00801910 { void m(); };
extern T_func_00801910 G1_func_00801910;
void func_00801910()
{
    G1_func_00801910.m();
}
