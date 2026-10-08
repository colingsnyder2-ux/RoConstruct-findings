// roc 2007-08 00779a70  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779a70
//
// 00779a70  b9181b8c00           mov ecx, 0x8c1b18
// 00779a75  e946d2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779a70 { void m(); };
extern T_func_00779a70 G1_func_00779a70;
void func_00779a70()
{
    G1_func_00779a70.m();
}
