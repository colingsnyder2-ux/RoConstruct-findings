// roc 2011-06 00a3fce0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fce0
//
// 00a3fce0  b9f48ed100           mov ecx, 0xd18ef4
// 00a3fce5  e96617e4ff           jmp 0x881450
// auto-matched from its assembly shape

struct T_func_00a3fce0 { void m(); };
extern T_func_00a3fce0 G1_func_00a3fce0;
void func_00a3fce0()
{
    G1_func_00a3fce0.m();
}
