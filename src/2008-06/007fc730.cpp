// roc 2008-06 007fc730  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc730
//
// 007fc730  b9083a9700           mov ecx, 0x973a08
// 007fc735  e92677d5ff           jmp 0x553e60
// auto-matched from its assembly shape

struct T_func_007fc730 { void m(); };
extern T_func_007fc730 G1_func_007fc730;
void func_007fc730()
{
    G1_func_007fc730.m();
}
