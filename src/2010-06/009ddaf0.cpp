// roc 2010-06 009ddaf0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddaf0
//
// 009ddaf0  b9187bc000           mov ecx, 0xc07b18
// 009ddaf5  e9e612b4ff           jmp 0x51ede0
// auto-matched from its assembly shape

struct T_func_009ddaf0 { void m(); };
extern T_func_009ddaf0 G1_func_009ddaf0;
void func_009ddaf0()
{
    G1_func_009ddaf0.m();
}
