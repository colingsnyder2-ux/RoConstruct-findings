// roc 2011-06 00a3fcd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fcd0
//
// 00a3fcd0  b9e88ed100           mov ecx, 0xd18ee8
// 00a3fcd5  e93ad0f8ff           jmp 0x9ccd14
// auto-matched from its assembly shape

struct T_func_00a3fcd0 { void m(); };
extern T_func_00a3fcd0 G1_func_00a3fcd0;
void func_00a3fcd0()
{
    G1_func_00a3fcd0.m();
}
