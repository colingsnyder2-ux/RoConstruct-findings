// roc 2011-06 00a37a90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37a90
//
// 00a37a90  b98007cc00           mov ecx, 0xcc0780
// 00a37a95  e9a6609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37a90 { void m(); };
extern T_func_00a37a90 G1_func_00a37a90;
void func_00a37a90()
{
    G1_func_00a37a90.m();
}
