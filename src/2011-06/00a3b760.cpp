// roc 2011-06 00a3b760  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b760
//
// 00a3b760  b928ebcc00           mov ecx, 0xcceb28
// 00a3b765  e9a60da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b760 { void m(); };
extern T_func_00a3b760 G1_func_00a3b760;
void func_00a3b760()
{
    G1_func_00a3b760.m();
}
