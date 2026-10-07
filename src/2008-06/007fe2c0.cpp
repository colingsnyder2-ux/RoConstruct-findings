// roc 2008-06 007fe2c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe2c0
//
// 007fe2c0  b9e86e9700           mov ecx, 0x976ee8
// 007fe2c5  e9a662dbff           jmp 0x5b4570
// auto-matched from its assembly shape

struct T_func_007fe2c0 { void m(); };
extern T_func_007fe2c0 G1_func_007fe2c0;
void func_007fe2c0()
{
    G1_func_007fe2c0.m();
}
