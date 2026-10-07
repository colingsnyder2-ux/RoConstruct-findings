// roc 2011-06 00a3fd20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd20
//
// 00a3fd20  b93c8fd100           mov ecx, 0xd18f3c
// 00a3fd25  e9eacff8ff           jmp 0x9ccd14
// auto-matched from its assembly shape

struct T_func_00a3fd20 { void m(); };
extern T_func_00a3fd20 G1_func_00a3fd20;
void func_00a3fd20()
{
    G1_func_00a3fd20.m();
}
