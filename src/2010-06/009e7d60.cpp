// roc 2010-06 009e7d60  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7d60
//
// 009e7d60  b9d817c200           mov ecx, 0xc217d8
// 009e7d65  e906e8baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7d60 { void m(); };
extern T_func_009e7d60 G1_func_009e7d60;
void func_009e7d60()
{
    G1_func_009e7d60.m();
}
