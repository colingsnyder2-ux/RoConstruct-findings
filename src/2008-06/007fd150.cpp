// roc 2008-06 007fd150  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd150
//
// 007fd150  b9c44a9700           mov ecx, 0x974ac4
// 007fd155  e9567bd9ff           jmp 0x594cb0
// auto-matched from its assembly shape

struct T_func_007fd150 { void m(); };
extern T_func_007fd150 G1_func_007fd150;
void func_007fd150()
{
    G1_func_007fd150.m();
}
