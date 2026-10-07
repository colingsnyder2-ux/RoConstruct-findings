// roc 2009-06 00868590  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00868590
//
// 00868590  b9c8b3a400           mov ecx, 0xa4b3c8
// 00868595  e9b6b1c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00868590 { void m(); };
extern T_func_00868590 G1_func_00868590;
void func_00868590()
{
    G1_func_00868590.m();
}
