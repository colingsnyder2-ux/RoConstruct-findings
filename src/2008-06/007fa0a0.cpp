// roc 2008-06 007fa0a0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa0a0
//
// 007fa0a0  b9b4c29600           mov ecx, 0x96c2b4
// 007fa0a5  e9d69cd5ff           jmp 0x553d80
// auto-matched from its assembly shape

struct T_func_007fa0a0 { void m(); };
extern T_func_007fa0a0 G1_func_007fa0a0;
void func_007fa0a0()
{
    G1_func_007fa0a0.m();
}
