// roc 2011-06 00a37750  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37750
//
// 00a37750  b96033cc00           mov ecx, 0xcc3360
// 00a37755  e9e6639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37750 { void m(); };
extern T_func_00a37750 G1_func_00a37750;
void func_00a37750()
{
    G1_func_00a37750.m();
}
