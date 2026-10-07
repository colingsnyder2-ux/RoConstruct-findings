// roc 2011-06 00a3ce50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ce50
//
// 00a3ce50  b98014cd00           mov ecx, 0xcd1480
// 00a3ce55  e96602a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3ce50 { void m(); };
extern T_func_00a3ce50 G1_func_00a3ce50;
void func_00a3ce50()
{
    G1_func_00a3ce50.m();
}
