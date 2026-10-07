// roc 2011-06 00a3f300  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f300
//
// 00a3f300  b9104ecd00           mov ecx, 0xcd4e10
// 00a3f305  e9b6dda6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3f300 { void m(); };
extern T_func_00a3f300 G1_func_00a3f300;
void func_00a3f300()
{
    G1_func_00a3f300.m();
}
