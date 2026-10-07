// roc 2008-06 007fd200  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd200
//
// 007fd200  b9344b9700           mov ecx, 0x974b34
// 007fd205  e9766bd5ff           jmp 0x553d80
// auto-matched from its assembly shape

struct T_func_007fd200 { void m(); };
extern T_func_007fd200 G1_func_007fd200;
void func_007fd200()
{
    G1_func_007fd200.m();
}
