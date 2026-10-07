// roc 2008-06 007fa9d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa9d0
//
// 007fa9d0  b95cd19600           mov ecx, 0x96d15c
// 007fa9d5  e9a693d5ff           jmp 0x553d80
// auto-matched from its assembly shape

struct T_func_007fa9d0 { void m(); };
extern T_func_007fa9d0 G1_func_007fa9d0;
void func_007fa9d0()
{
    G1_func_007fa9d0.m();
}
