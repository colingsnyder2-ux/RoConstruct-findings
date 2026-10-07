// roc 2011-06 00a3fc30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fc30
//
// 00a3fc30  b93888d100           mov ecx, 0xd18838
// 00a3fc35  e9d620e1ff           jmp 0x851d10
// auto-matched from its assembly shape

struct T_func_00a3fc30 { void m(); };
extern T_func_00a3fc30 G1_func_00a3fc30;
void func_00a3fc30()
{
    G1_func_00a3fc30.m();
}
