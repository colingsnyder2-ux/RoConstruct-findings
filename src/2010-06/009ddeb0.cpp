// roc 2010-06 009ddeb0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddeb0
//
// 009ddeb0  b9088ec000           mov ecx, 0xc08e08
// 009ddeb5  e9c6c6a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009ddeb0 { void m(); };
extern T_func_009ddeb0 G1_func_009ddeb0;
void func_009ddeb0()
{
    G1_func_009ddeb0.m();
}
