// roc 2008-06 007fff30  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fff30
//
// 007fff30  b988b49700           mov ecx, 0x97b488
// 007fff35  e926fdd6ff           jmp 0x56fc60
// auto-matched from its assembly shape

struct T_func_007fff30 { void m(); };
extern T_func_007fff30 G1_func_007fff30;
void func_007fff30()
{
    G1_func_007fff30.m();
}
