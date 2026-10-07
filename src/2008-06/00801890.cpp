// roc 2008-06 00801890  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801890
//
// 00801890  b998ed9700           mov ecx, 0x97ed98
// 00801895  e9daaffbff           jmp 0x7bc874
// auto-matched from its assembly shape

struct T_func_00801890 { void m(); };
extern T_func_00801890 G1_func_00801890;
void func_00801890()
{
    G1_func_00801890.m();
}
