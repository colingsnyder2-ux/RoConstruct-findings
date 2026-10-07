// roc 2008-06 007d9830  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9830
//
// 007d9830  b980bf9700           mov ecx, 0x97bf80
// 007d9835  e91601c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9830 { void m(); };
extern T_func_007d9830 G1_func_007d9830;
void func_007d9830()
{
    G1_func_007d9830.m();
}
