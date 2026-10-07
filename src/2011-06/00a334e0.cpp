// roc 2011-06 00a334e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a334e0
//
// 00a334e0  b98079cb00           mov ecx, 0xcb7980
// 00a334e5  e92690a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a334e0 { void m(); };
extern T_func_00a334e0 G1_func_00a334e0;
void func_00a334e0()
{
    G1_func_00a334e0.m();
}
