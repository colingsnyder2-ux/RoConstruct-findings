// roc 2008-06 007fc710  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc710
//
// 007fc710  b9d8399700           mov ecx, 0x9739d8
// 007fc715  e99685d9ff           jmp 0x594cb0
// auto-matched from its assembly shape

struct T_func_007fc710 { void m(); };
extern T_func_007fc710 G1_func_007fc710;
void func_007fc710()
{
    G1_func_007fc710.m();
}
