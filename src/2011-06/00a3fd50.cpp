// roc 2011-06 00a3fd50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd50
//
// 00a3fd50  b98c92d100           mov ecx, 0xd1928c
// 00a3fd55  e938caf8ff           jmp 0x9cc792
// auto-matched from its assembly shape

struct T_func_00a3fd50 { void m(); };
extern T_func_00a3fd50 G1_func_00a3fd50;
void func_00a3fd50()
{
    G1_func_00a3fd50.m();
}
