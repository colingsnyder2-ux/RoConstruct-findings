// roc 2011-06 00a3be70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3be70
//
// 00a3be70  b9a0f8cc00           mov ecx, 0xccf8a0
// 00a3be75  e99606a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3be70 { void m(); };
extern T_func_00a3be70 G1_func_00a3be70;
void func_00a3be70()
{
    G1_func_00a3be70.m();
}
