// roc 2009-06 00868ec0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00868ec0
//
// 00868ec0  b9bcb5a400           mov ecx, 0xa4b5bc
// 00868ec5  e986a8c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00868ec0 { void m(); };
extern T_func_00868ec0 G1_func_00868ec0;
void func_00868ec0()
{
    G1_func_00868ec0.m();
}
