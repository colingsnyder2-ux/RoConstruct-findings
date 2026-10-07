// roc 2011-06 00a398c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a398c0
//
// 00a398c0  b910b0cc00           mov ecx, 0xccb010
// 00a398c5  e92645beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a398c0 { void m(); };
extern T_func_00a398c0 G1_func_00a398c0;
void func_00a398c0()
{
    G1_func_00a398c0.m();
}
