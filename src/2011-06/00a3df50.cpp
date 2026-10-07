// roc 2011-06 00a3df50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3df50
//
// 00a3df50  b9382ccd00           mov ecx, 0xcd2c38
// 00a3df55  e9b6e5a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3df50 { void m(); };
extern T_func_00a3df50 G1_func_00a3df50;
void func_00a3df50()
{
    G1_func_00a3df50.m();
}
