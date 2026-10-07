// roc 2008-06 007fc720  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc720
//
// 007fc720  b9e4399700           mov ecx, 0x9739e4
// 007fc725  e95676d5ff           jmp 0x553d80
// auto-matched from its assembly shape

struct T_func_007fc720 { void m(); };
extern T_func_007fc720 G1_func_007fc720;
void func_007fc720()
{
    G1_func_007fc720.m();
}
