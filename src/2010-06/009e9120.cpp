// roc 2010-06 009e9120  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9120
//
// 009e9120  b90062c200           mov ecx, 0xc26200
// 009e9125  e9a044f9ff           jmp 0x97d5ca
// auto-matched from its assembly shape

struct T_func_009e9120 { void m(); };
extern T_func_009e9120 G1_func_009e9120;
void func_009e9120()
{
    G1_func_009e9120.m();
}
