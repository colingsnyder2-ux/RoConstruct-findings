// roc 2011-06 00a375b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a375b0
//
// 00a375b0  b95049cc00           mov ecx, 0xcc4950
// 00a375b5  e986659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a375b0 { void m(); };
extern T_func_00a375b0 G1_func_00a375b0;
void func_00a375b0()
{
    G1_func_00a375b0.m();
}
