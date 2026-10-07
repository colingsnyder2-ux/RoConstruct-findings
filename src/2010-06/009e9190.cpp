// roc 2010-06 009e9190  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9190
//
// 009e9190  b95866c200           mov ecx, 0xc26658
// 009e9195  e956c1eaff           jmp 0x8952f0
// auto-matched from its assembly shape

struct T_func_009e9190 { void m(); };
extern T_func_009e9190 G1_func_009e9190;
void func_009e9190()
{
    G1_func_009e9190.m();
}
