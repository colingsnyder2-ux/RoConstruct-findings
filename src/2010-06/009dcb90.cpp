// roc 2010-06 009dcb90  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcb90
//
// 009dcb90  b9084ac000           mov ecx, 0xc04a08
// 009dcb95  e9e6d9a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcb90 { void m(); };
extern T_func_009dcb90 G1_func_009dcb90;
void func_009dcb90()
{
    G1_func_009dcb90.m();
}
