// roc 2011-06 00a39bc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39bc0
//
// 00a39bc0  b9f0bdcc00           mov ecx, 0xccbdf0
// 00a39bc5  e92642beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39bc0 { void m(); };
extern T_func_00a39bc0 G1_func_00a39bc0;
void func_00a39bc0()
{
    G1_func_00a39bc0.m();
}
