// roc 2010-06 009e9150  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9150
//
// 009e9150  b92462c200           mov ecx, 0xc26224
// 009e9155  e9a67be5ff           jmp 0x840d00
// auto-matched from its assembly shape

struct T_func_009e9150 { void m(); };
extern T_func_009e9150 G1_func_009e9150;
void func_009e9150()
{
    G1_func_009e9150.m();
}
