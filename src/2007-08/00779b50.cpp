// roc 2007-08 00779b50  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b50
//
// 00779b50  b9b81d8c00           mov ecx, 0x8c1db8
// 00779b55  e9860bdeff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779b50 { void m(); };
extern T_func_00779b50 G1_func_00779b50;
void func_00779b50()
{
    G1_func_00779b50.m();
}
