// roc 2008-06 007fc740  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc740
//
// 007fc740  b9303a9700           mov ecx, 0x973a30
// 007fc745  e976e4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fc740 { void m(); };
extern T_func_007fc740 G1_func_007fc740;
void func_007fc740()
{
    G1_func_007fc740.m();
}
