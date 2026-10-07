// roc 2008-06 007fd9c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd9c0
//
// 007fd9c0  b9f8599700           mov ecx, 0x9759f8
// 007fd9c5  e9165bcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd9c0 { void m(); };
extern T_func_007fd9c0 G1_func_007fd9c0;
void func_007fd9c0()
{
    G1_func_007fd9c0.m();
}
