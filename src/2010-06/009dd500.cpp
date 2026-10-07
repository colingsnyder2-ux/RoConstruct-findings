// roc 2010-06 009dd500  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd500
//
// 009dd500  b94865c000           mov ecx, 0xc06548
// 009dd505  e9463dd1ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009dd500 { void m(); };
extern T_func_009dd500 G1_func_009dd500;
void func_009dd500()
{
    G1_func_009dd500.m();
}
