// roc 2011-06 00a35670  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35670
//
// 00a35670  b9d0dacb00           mov ecx, 0xcbdad0
// 00a35675  e98637b7ff           jmp 0x5a8e00
// auto-matched from its assembly shape

struct T_func_00a35670 { void m(); };
extern T_func_00a35670 G1_func_00a35670;
void func_00a35670()
{
    G1_func_00a35670.m();
}
