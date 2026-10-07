// roc 2008-06 007fcfa0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcfa0
//
// 007fcfa0  b9c0439700           mov ecx, 0x9743c0
// 007fcfa5  e9c678d6ff           jmp 0x564870
// auto-matched from its assembly shape

struct T_func_007fcfa0 { void m(); };
extern T_func_007fcfa0 G1_func_007fcfa0;
void func_007fcfa0()
{
    G1_func_007fcfa0.m();
}
