// roc 2008-06 007fd300  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd300
//
// 007fd300  b9884c9700           mov ecx, 0x974c88
// 007fd305  e9a679d9ff           jmp 0x594cb0
// auto-matched from its assembly shape

struct T_func_007fd300 { void m(); };
extern T_func_007fd300 G1_func_007fd300;
void func_007fd300()
{
    G1_func_007fd300.m();
}
