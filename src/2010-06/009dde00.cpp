// roc 2010-06 009dde00  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dde00
//
// 009dde00  b9308bc000           mov ecx, 0xc08b30
// 009dde05  e916b4b4ff           jmp 0x529220
// auto-matched from its assembly shape

struct T_func_009dde00 { void m(); };
extern T_func_009dde00 G1_func_009dde00;
void func_009dde00()
{
    G1_func_009dde00.m();
}
