// roc 2010-06 009e5280  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5280
//
// 009e5280  b9c8dcc100           mov ecx, 0xc1dcc8
// 009e5285  e9e612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5280 { void m(); };
extern T_func_009e5280 G1_func_009e5280;
void func_009e5280()
{
    G1_func_009e5280.m();
}
