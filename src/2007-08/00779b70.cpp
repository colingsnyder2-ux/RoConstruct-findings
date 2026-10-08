// roc 2007-08 00779b70  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b70
//
// 00779b70  b9301f8c00           mov ecx, 0x8c1f30
// 00779b75  e946d1c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779b70 { void m(); };
extern T_func_00779b70 G1_func_00779b70;
void func_00779b70()
{
    G1_func_00779b70.m();
}
