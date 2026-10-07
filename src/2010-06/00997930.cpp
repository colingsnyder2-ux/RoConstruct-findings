// roc 2010-06 00997930  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997930
//
// 00997930  b96c91c100           mov ecx, 0xc1916c
// 00997935  e9268edaff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_00997930 { void m(); };
extern T_func_00997930 G1_func_00997930;
void func_00997930()
{
    G1_func_00997930.m();
}
