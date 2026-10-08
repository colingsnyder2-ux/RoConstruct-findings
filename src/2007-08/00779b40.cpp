// roc 2007-08 00779b40  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b40
//
// 00779b40  b9781d8c00           mov ecx, 0x8c1d78
// 00779b45  e9960bdeff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779b40 { void m(); };
extern T_func_00779b40 G1_func_00779b40;
void func_00779b40()
{
    G1_func_00779b40.m();
}
