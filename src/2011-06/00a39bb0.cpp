// roc 2011-06 00a39bb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39bb0
//
// 00a39bb0  b9a0bdcc00           mov ecx, 0xccbda0
// 00a39bb5  e93642beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39bb0 { void m(); };
extern T_func_00a39bb0 G1_func_00a39bb0;
void func_00a39bb0()
{
    G1_func_00a39bb0.m();
}
