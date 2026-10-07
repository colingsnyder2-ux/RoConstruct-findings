// roc 2010-06 009e9110  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9110
//
// 009e9110  b9fc61c200           mov ecx, 0xc261fc
// 009e9115  e98c41f9ff           jmp 0x97d2a6
// auto-matched from its assembly shape

struct T_func_009e9110 { void m(); };
extern T_func_009e9110 G1_func_009e9110;
void func_009e9110()
{
    G1_func_009e9110.m();
}
