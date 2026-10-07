// roc 2011-06 00a35040  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35040
//
// 00a35040  b93cbecb00           mov ecx, 0xcbbe3c
// 00a35045  e9c674a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35040 { void m(); };
extern T_func_00a35040 G1_func_00a35040;
void func_00a35040()
{
    G1_func_00a35040.m();
}
