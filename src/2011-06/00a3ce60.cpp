// roc 2011-06 00a3ce60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ce60
//
// 00a3ce60  b93014cd00           mov ecx, 0xcd1430
// 00a3ce65  e9a6f6a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ce60 { void m(); };
extern T_func_00a3ce60 G1_func_00a3ce60;
void func_00a3ce60()
{
    G1_func_00a3ce60.m();
}
