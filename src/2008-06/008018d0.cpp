// roc 2008-06 008018d0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008018d0
//
// 008018d0  b9b4ed9700           mov ecx, 0x97edb4
// 008018d5  e9e65ff2ff           jmp 0x7278c0
// auto-matched from its assembly shape

struct T_func_008018d0 { void m(); };
extern T_func_008018d0 G1_func_008018d0;
void func_008018d0()
{
    G1_func_008018d0.m();
}
