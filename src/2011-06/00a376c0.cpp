// roc 2011-06 00a376c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a376c0
//
// 00a376c0  b9f83acc00           mov ecx, 0xcc3af8
// 00a376c5  e976649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a376c0 { void m(); };
extern T_func_00a376c0 G1_func_00a376c0;
void func_00a376c0()
{
    G1_func_00a376c0.m();
}
