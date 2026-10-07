// roc 2011-06 00a3fc60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fc60
//
// 00a3fc60  b9648ad100           mov ecx, 0xd18a64
// 00a3fc65  e9e6c0e1ff           jmp 0x85bd50
// auto-matched from its assembly shape

struct T_func_00a3fc60 { void m(); };
extern T_func_00a3fc60 G1_func_00a3fc60;
void func_00a3fc60()
{
    G1_func_00a3fc60.m();
}
