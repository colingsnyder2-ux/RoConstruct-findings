// roc 2011-06 00a35100  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35100
//
// 00a35100  b970c1cb00           mov ecx, 0xcbc170
// 00a35105  e90674a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35100 { void m(); };
extern T_func_00a35100 G1_func_00a35100;
void func_00a35100()
{
    G1_func_00a35100.m();
}
