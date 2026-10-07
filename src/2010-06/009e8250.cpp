// roc 2010-06 009e8250  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8250
//
// 009e8250  b9201ec200           mov ecx, 0xc21e20
// 009e8255  e916e3baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e8250 { void m(); };
extern T_func_009e8250 G1_func_009e8250;
void func_009e8250()
{
    G1_func_009e8250.m();
}
