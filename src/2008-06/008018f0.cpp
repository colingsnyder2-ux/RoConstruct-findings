// roc 2008-06 008018f0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008018f0
//
// 008018f0  b9d0ed9700           mov ecx, 0x97edd0
// 008018f5  e97aaffbff           jmp 0x7bc874
// auto-matched from its assembly shape

struct T_func_008018f0 { void m(); };
extern T_func_008018f0 G1_func_008018f0;
void func_008018f0()
{
    G1_func_008018f0.m();
}
