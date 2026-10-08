// roc 2007-08 00778750  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778750
//
// 00778750  b958e58b00           mov ecx, 0x8be558
// 00778755  e9b6eec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778750 { void m(); };
extern T_func_00778750 G1_func_00778750;
void func_00778750()
{
    G1_func_00778750.m();
}
