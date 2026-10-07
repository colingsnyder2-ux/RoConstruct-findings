// roc 2008-06 007fe760  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe760
//
// 007fe760  b9b0909700           mov ecx, 0x9790b0
// 007fe765  e956c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe760 { void m(); };
extern T_func_007fe760 G1_func_007fe760;
void func_007fe760()
{
    G1_func_007fe760.m();
}
