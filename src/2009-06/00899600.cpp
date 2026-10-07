// roc 2009-06 00899600  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899600
//
// 00899600  b9dca9a400           mov ecx, 0xa4a9dc
// 00899605  e916acb8ff           jmp 0x424220
// auto-matched from its assembly shape

struct T_func_00899600 { void m(); };
extern T_func_00899600 G1_func_00899600;
void func_00899600()
{
    G1_func_00899600.m();
}
