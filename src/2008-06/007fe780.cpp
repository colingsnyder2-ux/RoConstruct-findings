// roc 2008-06 007fe780  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe780
//
// 007fe780  b9208f9700           mov ecx, 0x978f20
// 007fe785  e936c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe780 { void m(); };
extern T_func_007fe780 G1_func_007fe780;
void func_007fe780()
{
    G1_func_007fe780.m();
}
