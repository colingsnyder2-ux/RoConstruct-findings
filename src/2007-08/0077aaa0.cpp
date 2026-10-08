// roc 2007-08 0077aaa0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aaa0
//
// 0077aaa0  b908468c00           mov ecx, 0x8c4608
// 0077aaa5  e916c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aaa0 { void m(); };
extern T_func_0077aaa0 G1_func_0077aaa0;
void func_0077aaa0()
{
    G1_func_0077aaa0.m();
}
