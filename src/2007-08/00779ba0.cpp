// roc 2007-08 00779ba0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779ba0
//
// 00779ba0  b908218c00           mov ecx, 0x8c2108
// 00779ba5  e966dac9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779ba0 { void m(); };
extern T_func_00779ba0 G1_func_00779ba0;
void func_00779ba0()
{
    G1_func_00779ba0.m();
}
