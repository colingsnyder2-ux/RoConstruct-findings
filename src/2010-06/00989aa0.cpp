// roc 2010-06 00989aa0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989aa0
//
// 00989aa0  b9f046c000           mov ecx, 0xc046f0
// 00989aa5  e91697b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989aa0 { void m(); };
extern T_func_00989aa0 G1_func_00989aa0;
void func_00989aa0()
{
    G1_func_00989aa0.m();
}
