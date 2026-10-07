// roc 2011-06 00a39a50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a50
//
// 00a39a50  b910b9cc00           mov ecx, 0xccb910
// 00a39a55  e9b62aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39a50 { void m(); };
extern T_func_00a39a50 G1_func_00a39a50;
void func_00a39a50()
{
    G1_func_00a39a50.m();
}
