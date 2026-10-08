// roc 2007-08 007774e0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007774e0
//
// 007774e0  b980b08b00           mov ecx, 0x8bb080
// 007774e5  e9860fcaff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_007774e0 { void m(); };
extern T_func_007774e0 G1_func_007774e0;
void func_007774e0()
{
    G1_func_007774e0.m();
}
