// roc 2011-06 00a39710  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39710
//
// 00a39710  b9e8adcc00           mov ecx, 0xccade8
// 00a39715  e9a639a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39710 { void m(); };
extern T_func_00a39710 G1_func_00a39710;
void func_00a39710()
{
    G1_func_00a39710.m();
}
