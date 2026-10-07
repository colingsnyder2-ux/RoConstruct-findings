// roc 2008-06 00801973  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801973
//
// 00801973  b940f39700           mov ecx, 0x97f340
// 00801978  e95b48faff           jmp 0x7a61d8
// auto-matched from its assembly shape

struct T_func_00801973 { void m(); };
extern T_func_00801973 G1_func_00801973;
void func_00801973()
{
    G1_func_00801973.m();
}
