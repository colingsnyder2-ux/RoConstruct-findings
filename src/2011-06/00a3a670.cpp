// roc 2011-06 00a3a670  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a670
//
// 00a3a670  b998cccc00           mov ecx, 0xcccc98
// 00a3a675  e9f650c3ff           jmp 0x66f770
// auto-matched from its assembly shape

struct T_func_00a3a670 { void m(); };
extern T_func_00a3a670 G1_func_00a3a670;
void func_00a3a670()
{
    G1_func_00a3a670.m();
}
