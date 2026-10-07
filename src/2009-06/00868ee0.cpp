// roc 2009-06 00868ee0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00868ee0
//
// 00868ee0  b96cb5a400           mov ecx, 0xa4b56c
// 00868ee5  e966a8c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00868ee0 { void m(); };
extern T_func_00868ee0 G1_func_00868ee0;
void func_00868ee0()
{
    G1_func_00868ee0.m();
}
