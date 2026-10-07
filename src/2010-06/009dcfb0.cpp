// roc 2010-06 009dcfb0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcfb0
//
// 009dcfb0  b94052c000           mov ecx, 0xc05240
// 009dcfb5  e9c6d5a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcfb0 { void m(); };
extern T_func_009dcfb0 G1_func_009dcfb0;
void func_009dcfb0()
{
    G1_func_009dcfb0.m();
}
