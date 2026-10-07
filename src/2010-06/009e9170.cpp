// roc 2010-06 009e9170  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9170
//
// 009e9170  b95062c200           mov ecx, 0xc26250
// 009e9175  e95044f9ff           jmp 0x97d5ca
// auto-matched from its assembly shape

struct T_func_009e9170 { void m(); };
extern T_func_009e9170 G1_func_009e9170;
void func_009e9170()
{
    G1_func_009e9170.m();
}
