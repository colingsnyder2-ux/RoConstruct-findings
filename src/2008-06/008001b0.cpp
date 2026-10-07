// roc 2008-06 008001b0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008001b0
//
// 008001b0  b9a0b89700           mov ecx, 0x97b8a0
// 008001b5  e93690e0ff           jmp 0x6091f0
// auto-matched from its assembly shape

struct T_func_008001b0 { void m(); };
extern T_func_008001b0 G1_func_008001b0;
void func_008001b0()
{
    G1_func_008001b0.m();
}
