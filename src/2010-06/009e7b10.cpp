// roc 2010-06 009e7b10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7b10
//
// 009e7b10  b9d811c200           mov ecx, 0xc211d8
// 009e7b15  e95654d1ff           jmp 0x6fcf70
// auto-matched from its assembly shape

struct T_func_009e7b10 { void m(); };
extern T_func_009e7b10 G1_func_009e7b10;
void func_009e7b10()
{
    G1_func_009e7b10.m();
}
