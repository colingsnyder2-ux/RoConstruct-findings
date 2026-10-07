// roc 2011-06 00a3c880  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c880
//
// 00a3c880  b9a008cd00           mov ecx, 0xcd08a0
// 00a3c885  e93608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c880 { void m(); };
extern T_func_00a3c880 G1_func_00a3c880;
void func_00a3c880()
{
    G1_func_00a3c880.m();
}
