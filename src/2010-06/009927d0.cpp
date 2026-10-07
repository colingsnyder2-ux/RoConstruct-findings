// roc 2010-06 009927d0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009927d0
//
// 009927d0  b968bac000           mov ecx, 0xc0ba68
// 009927d5  e9e609b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009927d0 { void m(); };
extern T_func_009927d0 G1_func_009927d0;
void func_009927d0()
{
    G1_func_009927d0.m();
}
