// roc 2008-06 007d6930  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6930
//
// 007d6930  b920ac9700           mov ecx, 0x97ac20
// 007d6935  e91630c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6930 { void m(); };
extern T_func_007d6930 G1_func_007d6930;
void func_007d6930()
{
    G1_func_007d6930.m();
}
