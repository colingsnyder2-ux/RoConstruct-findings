// roc 2010-06 0098cf10  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098cf10
//
// 0098cf10  b9e866c000           mov ecx, 0xc066e8
// 0098cf15  e9a662b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098cf10 { void m(); };
extern T_func_0098cf10 G1_func_0098cf10;
void func_0098cf10()
{
    G1_func_0098cf10.m();
}
