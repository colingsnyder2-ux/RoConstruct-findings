// roc 2009-06 00868550  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00868550
//
// 00868550  b950b4a400           mov ecx, 0xa4b450
// 00868555  e9f6b1c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00868550 { void m(); };
extern T_func_00868550 G1_func_00868550;
void func_00868550()
{
    G1_func_00868550.m();
}
