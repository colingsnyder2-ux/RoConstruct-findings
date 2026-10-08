// roc 2007-08 007776e0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007776e0
//
// 007776e0  b980b58b00           mov ecx, 0x8bb580
// 007776e5  e9d6f5c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007776e0 { void m(); };
extern T_func_007776e0 G1_func_007776e0;
void func_007776e0()
{
    G1_func_007776e0.m();
}
