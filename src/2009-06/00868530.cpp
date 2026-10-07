// roc 2009-06 00868530  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00868530
//
// 00868530  b910b4a400           mov ecx, 0xa4b410
// 00868535  e916b2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00868530 { void m(); };
extern T_func_00868530 G1_func_00868530;
void func_00868530()
{
    G1_func_00868530.m();
}
