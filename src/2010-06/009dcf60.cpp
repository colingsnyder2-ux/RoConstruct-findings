// roc 2010-06 009dcf60  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcf60
//
// 009dcf60  b94057c000           mov ecx, 0xc05740
// 009dcf65  e916d6a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcf60 { void m(); };
extern T_func_009dcf60 G1_func_009dcf60;
void func_009dcf60()
{
    G1_func_009dcf60.m();
}
