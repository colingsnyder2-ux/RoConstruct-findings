// roc 2011-06 00a3af30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3af30
//
// 00a3af30  b978decc00           mov ecx, 0xccde78
// 00a3af35  e98621a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3af30 { void m(); };
extern T_func_00a3af30 G1_func_00a3af30;
void func_00a3af30()
{
    G1_func_00a3af30.m();
}
