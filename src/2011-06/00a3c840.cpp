// roc 2011-06 00a3c840  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c840
//
// 00a3c840  b9b009cd00           mov ecx, 0xcd09b0
// 00a3c845  e97608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c840 { void m(); };
extern T_func_00a3c840 G1_func_00a3c840;
void func_00a3c840()
{
    G1_func_00a3c840.m();
}
