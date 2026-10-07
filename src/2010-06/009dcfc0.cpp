// roc 2010-06 009dcfc0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcfc0
//
// 009dcfc0  b94051c000           mov ecx, 0xc05140
// 009dcfc5  e9b6d5a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcfc0 { void m(); };
extern T_func_009dcfc0 G1_func_009dcfc0;
void func_009dcfc0()
{
    G1_func_009dcfc0.m();
}
