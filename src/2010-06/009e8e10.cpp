// roc 2010-06 009e8e10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8e10
//
// 009e8e10  b9b837c200           mov ecx, 0xc237b8
// 009e8e15  e936c1a3ff           jmp 0x424f50
// auto-matched from its assembly shape

struct T_func_009e8e10 { void m(); };
extern T_func_009e8e10 G1_func_009e8e10;
void func_009e8e10()
{
    G1_func_009e8e10.m();
}
