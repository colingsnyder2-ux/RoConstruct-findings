// roc 2010-06 009e9140  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9140
//
// 009e9140  b94462c200           mov ecx, 0xc26244
// 009e9145  e98044f9ff           jmp 0x97d5ca
// auto-matched from its assembly shape

struct T_func_009e9140 { void m(); };
extern T_func_009e9140 G1_func_009e9140;
void func_009e9140()
{
    G1_func_009e9140.m();
}
