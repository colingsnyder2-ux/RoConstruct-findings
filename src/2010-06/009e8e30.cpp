// roc 2010-06 009e8e30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8e30
//
// 009e8e30  b94838c200           mov ecx, 0xc23848
// 009e8e35  e916c1a3ff           jmp 0x424f50
// auto-matched from its assembly shape

struct T_func_009e8e30 { void m(); };
extern T_func_009e8e30 G1_func_009e8e30;
void func_009e8e30()
{
    G1_func_009e8e30.m();
}
