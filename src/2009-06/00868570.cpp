// roc 2009-06 00868570  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00868570
//
// 00868570  b990b4a400           mov ecx, 0xa4b490
// 00868575  e9d6b1c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00868570 { void m(); };
extern T_func_00868570 G1_func_00868570;
void func_00868570()
{
    G1_func_00868570.m();
}
