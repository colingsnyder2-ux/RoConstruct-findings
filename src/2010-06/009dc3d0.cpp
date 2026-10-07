// roc 2010-06 009dc3d0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc3d0
//
// 009dc3d0  b95844c000           mov ecx, 0xc04458
// 009dc3d5  e996a1bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dc3d0 { void m(); };
extern T_func_009dc3d0 G1_func_009dc3d0;
void func_009dc3d0()
{
    G1_func_009dc3d0.m();
}
