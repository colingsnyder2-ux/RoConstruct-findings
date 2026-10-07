// roc 2010-06 009e8a90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8a90
//
// 009e8a90  b96827c200           mov ecx, 0xc22768
// 009e8a95  e9d6dabaff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e8a90 { void m(); };
extern T_func_009e8a90 G1_func_009e8a90;
void func_009e8a90()
{
    G1_func_009e8a90.m();
}
