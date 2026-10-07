// roc 2010-06 009dcf40  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcf40
//
// 009dcf40  b94059c000           mov ecx, 0xc05940
// 009dcf45  e936d6a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcf40 { void m(); };
extern T_func_009dcf40 G1_func_009dcf40;
void func_009dcf40()
{
    G1_func_009dcf40.m();
}
