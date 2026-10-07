// roc 2011-06 00a3ce30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ce30
//
// 00a3ce30  b90815cd00           mov ecx, 0xcd1508
// 00a3ce35  e9d6f6a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ce30 { void m(); };
extern T_func_00a3ce30 G1_func_00a3ce30;
void func_00a3ce30()
{
    G1_func_00a3ce30.m();
}
