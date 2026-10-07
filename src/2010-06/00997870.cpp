// roc 2010-06 00997870  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997870
//
// 00997870  b9988ec100           mov ecx, 0xc18e98
// 00997875  e946b9b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997870 { void m(); };
extern T_func_00997870 G1_func_00997870;
void func_00997870()
{
    G1_func_00997870.m();
}
