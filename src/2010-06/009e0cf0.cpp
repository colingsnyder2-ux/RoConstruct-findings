// roc 2010-06 009e0cf0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0cf0
//
// 009e0cf0  b990dac000           mov ecx, 0xc0da90
// 009e0cf5  e98698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0cf0 { void m(); };
extern T_func_009e0cf0 G1_func_009e0cf0;
void func_009e0cf0()
{
    G1_func_009e0cf0.m();
}
