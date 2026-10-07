// roc 2009-06 0086ac00  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086ac00
//
// 0086ac00  b960bea400           mov ecx, 0xa4be60
// 0086ac05  e9468bc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086ac00 { void m(); };
extern T_func_0086ac00 G1_func_0086ac00;
void func_0086ac00()
{
    G1_func_0086ac00.m();
}
