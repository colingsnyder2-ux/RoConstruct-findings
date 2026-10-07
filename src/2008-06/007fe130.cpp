// roc 2008-06 007fe130  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe130
//
// 007fe130  b9e8689700           mov ecx, 0x9768e8
// 007fe135  e9d652daff           jmp 0x5a3410
// auto-matched from its assembly shape

struct T_func_007fe130 { void m(); };
extern T_func_007fe130 G1_func_007fe130;
void func_007fe130()
{
    G1_func_007fe130.m();
}
