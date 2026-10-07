// roc 2010-06 009dc3b0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc3b0
//
// 009dc3b0  b9a045c000           mov ecx, 0xc045a0
// 009dc3b5  e9b6a1bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dc3b0 { void m(); };
extern T_func_009dc3b0 G1_func_009dc3b0;
void func_009dc3b0()
{
    G1_func_009dc3b0.m();
}
