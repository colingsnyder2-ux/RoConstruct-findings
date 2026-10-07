// roc 2011-06 00a39bd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39bd0
//
// 00a39bd0  b9f8becc00           mov ecx, 0xccbef8
// 00a39bd5  e91642beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39bd0 { void m(); };
extern T_func_00a39bd0 G1_func_00a39bd0;
void func_00a39bd0()
{
    G1_func_00a39bd0.m();
}
