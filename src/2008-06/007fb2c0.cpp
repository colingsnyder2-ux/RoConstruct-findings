// roc 2008-06 007fb2c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb2c0
//
// 007fb2c0  b908009700           mov ecx, 0x970008
// 007fb2c5  e9f6f8c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fb2c0 { void m(); };
extern T_func_007fb2c0 G1_func_007fb2c0;
void func_007fb2c0()
{
    G1_func_007fb2c0.m();
}
