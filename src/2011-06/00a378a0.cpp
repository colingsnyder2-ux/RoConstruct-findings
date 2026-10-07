// roc 2011-06 00a378a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a378a0
//
// 00a378a0  b9a821cc00           mov ecx, 0xcc21a8
// 00a378a5  e996629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a378a0 { void m(); };
extern T_func_00a378a0 G1_func_00a378a0;
void func_00a378a0()
{
    G1_func_00a378a0.m();
}
