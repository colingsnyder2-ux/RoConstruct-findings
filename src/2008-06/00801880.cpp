// roc 2008-06 00801880  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801880
//
// 00801880  b948eb9700           mov ecx, 0x97eb48
// 00801885  e9568bf7ff           jmp 0x77a3e0
// auto-matched from its assembly shape

struct T_func_00801880 { void m(); };
extern T_func_00801880 G1_func_00801880;
void func_00801880()
{
    G1_func_00801880.m();
}
