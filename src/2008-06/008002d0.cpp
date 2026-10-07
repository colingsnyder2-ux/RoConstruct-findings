// roc 2008-06 008002d0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008002d0
//
// 008002d0  b910ba9700           mov ecx, 0x97ba10
// 008002d5  e9e6a8c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_008002d0 { void m(); };
extern T_func_008002d0 G1_func_008002d0;
void func_008002d0()
{
    G1_func_008002d0.m();
}
