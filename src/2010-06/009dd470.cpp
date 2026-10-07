// roc 2010-06 009dd470  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd470
//
// 009dd470  b95864c000           mov ecx, 0xc06458
// 009dd475  e9f690bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dd470 { void m(); };
extern T_func_009dd470 G1_func_009dd470;
void func_009dd470()
{
    G1_func_009dd470.m();
}
