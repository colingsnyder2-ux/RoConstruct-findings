// roc 2011-06 00a34fe0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34fe0
//
// 00a34fe0  b964becb00           mov ecx, 0xcbbe64
// 00a34fe5  e92675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34fe0 { void m(); };
extern T_func_00a34fe0 G1_func_00a34fe0;
void func_00a34fe0()
{
    G1_func_00a34fe0.m();
}
