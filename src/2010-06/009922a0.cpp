// roc 2010-06 009922a0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009922a0
//
// 009922a0  b908b6c000           mov ecx, 0xc0b608
// 009922a5  e9160fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009922a0 { void m(); };
extern T_func_009922a0 G1_func_009922a0;
void func_009922a0()
{
    G1_func_009922a0.m();
}
