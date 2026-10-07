// roc 2010-06 009a1710  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1710
//
// 009a1710  b908e2c100           mov ecx, 0xc1e208
// 009a1715  e9a61ab0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1710 { void m(); };
extern T_func_009a1710 G1_func_009a1710;
void func_009a1710()
{
    G1_func_009a1710.m();
}
