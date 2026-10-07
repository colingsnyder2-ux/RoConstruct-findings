// roc 2008-06 007fe710  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe710
//
// 007fe710  b9407f9700           mov ecx, 0x977f40
// 007fe715  e9a6c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe710 { void m(); };
extern T_func_007fe710 G1_func_007fe710;
void func_007fe710()
{
    G1_func_007fe710.m();
}
