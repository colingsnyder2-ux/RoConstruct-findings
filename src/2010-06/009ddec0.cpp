// roc 2010-06 009ddec0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddec0
//
// 009ddec0  b9088dc000           mov ecx, 0xc08d08
// 009ddec5  e9b6c6a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009ddec0 { void m(); };
extern T_func_009ddec0 G1_func_009ddec0;
void func_009ddec0()
{
    G1_func_009ddec0.m();
}
