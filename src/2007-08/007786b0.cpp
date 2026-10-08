// roc 2007-08 007786b0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007786b0
//
// 007786b0  b990e38b00           mov ecx, 0x8be390
// 007786b5  e906e6c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007786b0 { void m(); };
extern T_func_007786b0 G1_func_007786b0;
void func_007786b0()
{
    G1_func_007786b0.m();
}
