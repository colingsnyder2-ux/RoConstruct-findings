// roc 2009-06 00866440  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00866440
//
// 00866440  b980a9a400           mov ecx, 0xa4a980
// 00866445  e906d3c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00866440 { void m(); };
extern T_func_00866440 G1_func_00866440;
void func_00866440()
{
    G1_func_00866440.m();
}
