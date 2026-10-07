// roc 2011-06 00a358e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a358e0
//
// 00a358e0  b920e1cb00           mov ecx, 0xcbe120
// 00a358e5  e9266ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a358e0 { void m(); };
extern T_func_00a358e0 G1_func_00a358e0;
void func_00a358e0()
{
    G1_func_00a358e0.m();
}
