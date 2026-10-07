// roc 2010-06 009e32d0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e32d0
//
// 009e32d0  b99ca9c100           mov ecx, 0xc1a99c
// 009e32d5  e9f674d5ff           jmp 0x73a7d0
// auto-matched from its assembly shape

struct T_func_009e32d0 { void m(); };
extern T_func_009e32d0 G1_func_009e32d0;
void func_009e32d0()
{
    G1_func_009e32d0.m();
}
