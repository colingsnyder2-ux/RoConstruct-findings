// roc 2011-06 00a3ce20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ce20
//
// 00a3ce20  b9b814cd00           mov ecx, 0xcd14b8
// 00a3ce25  e9e6f6a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ce20 { void m(); };
extern T_func_00a3ce20 G1_func_00a3ce20;
void func_00a3ce20()
{
    G1_func_00a3ce20.m();
}
