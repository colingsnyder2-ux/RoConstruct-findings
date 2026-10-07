// roc 2008-06 00800040  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800040
//
// 00800040  b9f0b59700           mov ecx, 0x97b5f0
// 00800045  e976abc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800040 { void m(); };
extern T_func_00800040 G1_func_00800040;
void func_00800040()
{
    G1_func_00800040.m();
}
