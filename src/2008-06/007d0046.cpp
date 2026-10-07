// roc 2008-06 007d0046  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0046
//
// 007d0046  b9b84c9700           mov ecx, 0x974cb8
// 007d004b  e9d03cdeff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007d0046 { void m(); };
extern T_func_007d0046 G1_func_007d0046;
void func_007d0046()
{
    G1_func_007d0046.m();
}
