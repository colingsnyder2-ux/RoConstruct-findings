// roc 2010-06 009dcf80  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcf80
//
// 009dcf80  b94055c000           mov ecx, 0xc05540
// 009dcf85  e9f6d5a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcf80 { void m(); };
extern T_func_009dcf80 G1_func_009dcf80;
void func_009dcf80()
{
    G1_func_009dcf80.m();
}
