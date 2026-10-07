// roc 2011-06 00a378e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a378e0
//
// 00a378e0  b9481ecc00           mov ecx, 0xcc1e48
// 00a378e5  e956629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a378e0 { void m(); };
extern T_func_00a378e0 G1_func_00a378e0;
void func_00a378e0()
{
    G1_func_00a378e0.m();
}
