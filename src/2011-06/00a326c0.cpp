// roc 2011-06 00a326c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a326c0
//
// 00a326c0  b9405acb00           mov ecx, 0xcb5a40
// 00a326c5  e9469ea7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a326c0 { void m(); };
extern T_func_00a326c0 G1_func_00a326c0;
void func_00a326c0()
{
    G1_func_00a326c0.m();
}
