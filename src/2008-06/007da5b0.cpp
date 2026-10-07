// roc 2008-06 007da5b0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da5b0
//
// 007da5b0  b930d39700           mov ecx, 0x97d330
// 007da5b5  e996f3c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da5b0 { void m(); };
extern T_func_007da5b0 G1_func_007da5b0;
void func_007da5b0()
{
    G1_func_007da5b0.m();
}
