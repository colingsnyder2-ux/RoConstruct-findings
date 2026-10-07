// roc 2011-06 00a3fcc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fcc0
//
// 00a3fcc0  b9e48ed100           mov ecx, 0xd18ee4
// 00a3fcc5  e978ccf8ff           jmp 0x9cc942
// auto-matched from its assembly shape

struct T_func_00a3fcc0 { void m(); };
extern T_func_00a3fcc0 G1_func_00a3fcc0;
void func_00a3fcc0()
{
    G1_func_00a3fcc0.m();
}
