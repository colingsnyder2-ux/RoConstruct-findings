// roc 2008-06 007feec0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007feec0
//
// 007feec0  b980999700           mov ecx, 0x979980
// 007feec5  e976e3dcff           jmp 0x5cd240
// auto-matched from its assembly shape

struct T_func_007feec0 { void m(); };
extern T_func_007feec0 G1_func_007feec0;
void func_007feec0()
{
    G1_func_007feec0.m();
}
