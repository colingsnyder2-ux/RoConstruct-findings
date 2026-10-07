// roc 2011-06 00a34f50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f50
//
// 00a34f50  b9c8bccb00           mov ecx, 0xcbbcc8
// 00a34f55  e96681a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a34f50 { void m(); };
extern T_func_00a34f50 G1_func_00a34f50;
void func_00a34f50()
{
    G1_func_00a34f50.m();
}
