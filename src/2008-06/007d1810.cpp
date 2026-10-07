// roc 2008-06 007d1810  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d1810
//
// 007d1810  b9885a9700           mov ecx, 0x975a88
// 007d1815  e93681c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d1810 { void m(); };
extern T_func_007d1810 G1_func_007d1810;
void func_007d1810()
{
    G1_func_007d1810.m();
}
