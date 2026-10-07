// roc 2010-06 009dcf90  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcf90
//
// 009dcf90  b94054c000           mov ecx, 0xc05440
// 009dcf95  e9e6d5a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcf90 { void m(); };
extern T_func_009dcf90 G1_func_009dcf90;
void func_009dcf90()
{
    G1_func_009dcf90.m();
}
