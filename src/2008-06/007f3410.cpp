// roc 2008-06 007f3410  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3410
//
// 007f3410  b9b04d9700           mov ecx, 0x974db0
// 007f3415  e9d611d2ff           jmp 0x5145f0
// auto-matched from its assembly shape

struct T_func_007f3410 { void m(); };
extern T_func_007f3410 G1_func_007f3410;
void func_007f3410()
{
    G1_func_007f3410.m();
}
