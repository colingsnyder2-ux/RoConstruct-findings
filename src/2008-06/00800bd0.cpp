// roc 2008-06 00800bd0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800bd0
//
// 00800bd0  b9a8ce9700           mov ecx, 0x97cea8
// 00800bd5  e9e69fc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800bd0 { void m(); };
extern T_func_00800bd0 G1_func_00800bd0;
void func_00800bd0()
{
    G1_func_00800bd0.m();
}
