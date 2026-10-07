// roc 2010-06 009e0eb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0eb0
//
// 009e0eb0  b9b07dc100           mov ecx, 0xc17db0
// 009e0eb5  e91612bdff           jmp 0x5b20d0
// auto-matched from its assembly shape

struct T_func_009e0eb0 { void m(); };
extern T_func_009e0eb0 G1_func_009e0eb0;
void func_009e0eb0()
{
    G1_func_009e0eb0.m();
}
