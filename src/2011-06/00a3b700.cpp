// roc 2011-06 00a3b700  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b700
//
// 00a3b700  b930efcc00           mov ecx, 0xccef30
// 00a3b705  e9060ea7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b700 { void m(); };
extern T_func_00a3b700 G1_func_00a3b700;
void func_00a3b700()
{
    G1_func_00a3b700.m();
}
