// roc 2007-08 0077a8b0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a8b0
//
// 0077a8b0  b948338c00           mov ecx, 0x8c3348
// 0077a8b5  e956cdc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077a8b0 { void m(); };
extern T_func_0077a8b0 G1_func_0077a8b0;
void func_0077a8b0()
{
    G1_func_0077a8b0.m();
}
