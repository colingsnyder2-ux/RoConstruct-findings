// roc 2007-08 007776c0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007776c0
//
// 007776c0  b9a0b68b00           mov ecx, 0x8bb6a0
// 007776c5  e9f6f5c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007776c0 { void m(); };
extern T_func_007776c0 G1_func_007776c0;
void func_007776c0()
{
    G1_func_007776c0.m();
}
