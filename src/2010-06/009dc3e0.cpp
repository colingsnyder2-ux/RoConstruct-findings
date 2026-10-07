// roc 2010-06 009dc3e0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc3e0
//
// 009dc3e0  b9f848c000           mov ecx, 0xc048f8
// 009dc3e5  e986a1bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dc3e0 { void m(); };
extern T_func_009dc3e0 G1_func_009dc3e0;
void func_009dc3e0()
{
    G1_func_009dc3e0.m();
}
