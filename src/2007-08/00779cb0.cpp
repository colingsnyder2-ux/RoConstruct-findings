// roc 2007-08 00779cb0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779cb0
//
// 00779cb0  b910228c00           mov ecx, 0x8c2210
// 00779cb5  e9f60adeff           jmp 0x55a7b0
// auto-matched from its assembly shape

struct T_func_00779cb0 { void m(); };
extern T_func_00779cb0 G1_func_00779cb0;
void func_00779cb0()
{
    G1_func_00779cb0.m();
}
