// roc 2011-06 00a3ce70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ce70
//
// 00a3ce70  b99015cd00           mov ecx, 0xcd1590
// 00a3ce75  e996f6a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ce70 { void m(); };
extern T_func_00a3ce70 G1_func_00a3ce70;
void func_00a3ce70()
{
    G1_func_00a3ce70.m();
}
