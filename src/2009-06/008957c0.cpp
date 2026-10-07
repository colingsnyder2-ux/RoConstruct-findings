// roc 2009-06 008957c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008957c0
//
// 008957c0  b920dda300           mov ecx, 0xa3dd20
// 008957c5  e946a0d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_008957c0 { void m(); };
extern T_func_008957c0 G1_func_008957c0;
void func_008957c0()
{
    G1_func_008957c0.m();
}
