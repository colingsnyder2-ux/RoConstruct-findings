// roc 2011-06 00a3fc90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fc90
//
// 00a3fc90  b9988ad100           mov ecx, 0xd18a98
// 00a3fc95  e9c658e3ff           jmp 0x875560
// auto-matched from its assembly shape

struct T_func_00a3fc90 { void m(); };
extern T_func_00a3fc90 G1_func_00a3fc90;
void func_00a3fc90()
{
    G1_func_00a3fc90.m();
}
