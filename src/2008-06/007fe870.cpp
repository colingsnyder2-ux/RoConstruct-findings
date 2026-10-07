// roc 2008-06 007fe870  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe870
//
// 007fe870  b9d8879700           mov ecx, 0x9787d8
// 007fe875  e946c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe870 { void m(); };
extern T_func_007fe870 G1_func_007fe870;
void func_007fe870()
{
    G1_func_007fe870.m();
}
