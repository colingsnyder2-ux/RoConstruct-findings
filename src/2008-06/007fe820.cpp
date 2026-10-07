// roc 2008-06 007fe820  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe820
//
// 007fe820  b9907a9700           mov ecx, 0x977a90
// 007fe825  e996c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe820 { void m(); };
extern T_func_007fe820 G1_func_007fe820;
void func_007fe820()
{
    G1_func_007fe820.m();
}
