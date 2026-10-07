// roc 2011-06 00a19040  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19040
//
// 00a19040  b94679cb00           mov ecx, 0xcb7946
// 00a19045  e9d630a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a19040 { void m(); };
extern T_func_00a19040 G1_func_00a19040;
void func_00a19040()
{
    G1_func_00a19040.m();
}
