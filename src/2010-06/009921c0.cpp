// roc 2010-06 009921c0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009921c0
//
// 009921c0  b980b6c000           mov ecx, 0xc0b680
// 009921c5  e9f60fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009921c0 { void m(); };
extern T_func_009921c0 G1_func_009921c0;
void func_009921c0()
{
    G1_func_009921c0.m();
}
