// roc 2011-06 00a39a30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a30
//
// 00a39a30  b9c8b9cc00           mov ecx, 0xccb9c8
// 00a39a35  e9d62aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39a30 { void m(); };
extern T_func_00a39a30 G1_func_00a39a30;
void func_00a39a30()
{
    G1_func_00a39a30.m();
}
