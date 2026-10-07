// roc 2010-06 009dc2e0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc2e0
//
// 009dc2e0  b9d842c000           mov ecx, 0xc042d8
// 009dc2e5  e936f2acff           jmp 0x4ab520
// auto-matched from its assembly shape

struct T_func_009dc2e0 { void m(); };
extern T_func_009dc2e0 G1_func_009dc2e0;
void func_009dc2e0()
{
    G1_func_009dc2e0.m();
}
