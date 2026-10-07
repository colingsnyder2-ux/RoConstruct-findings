// roc 2011-06 00a3fd00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd00
//
// 00a3fd00  b90c8fd100           mov ecx, 0xd18f0c
// 00a3fd05  e976dfe5ff           jmp 0x89dc80
// auto-matched from its assembly shape

struct T_func_00a3fd00 { void m(); };
extern T_func_00a3fd00 G1_func_00a3fd00;
void func_00a3fd00()
{
    G1_func_00a3fd00.m();
}
