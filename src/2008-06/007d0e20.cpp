// roc 2008-06 007d0e20  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0e20
//
// 007d0e20  b9b0519700           mov ecx, 0x9751b0
// 007d0e25  e9268bc3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d0e20 { void m(); };
extern T_func_007d0e20 G1_func_007d0e20;
void func_007d0e20()
{
    G1_func_007d0e20.m();
}
