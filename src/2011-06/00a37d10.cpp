// roc 2011-06 00a37d10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d10
//
// 00a37d10  b9f8a0cc00           mov ecx, 0xcca0f8
// 00a37d15  e92621b9ff           jmp 0x5c9e40
// auto-matched from its assembly shape

struct T_func_00a37d10 { void m(); };
extern T_func_00a37d10 G1_func_00a37d10;
void func_00a37d10()
{
    G1_func_00a37d10.m();
}
