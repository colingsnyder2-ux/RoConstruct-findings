// roc 2011-06 00a399f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a399f0
//
// 00a399f0  b950b9cc00           mov ecx, 0xccb950
// 00a399f5  e9566cc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a399f0 { void m(); };
extern T_func_00a399f0 G1_func_00a399f0;
void func_00a399f0()
{
    G1_func_00a399f0.m();
}
