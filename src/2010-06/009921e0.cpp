// roc 2010-06 009921e0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009921e0
//
// 009921e0  b950b7c000           mov ecx, 0xc0b750
// 009921e5  e9d60fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009921e0 { void m(); };
extern T_func_009921e0 G1_func_009921e0;
void func_009921e0()
{
    G1_func_009921e0.m();
}
