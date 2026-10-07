// roc 2010-06 009927b0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009927b0
//
// 009927b0  b9b0bac000           mov ecx, 0xc0bab0
// 009927b5  e9060ab1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009927b0 { void m(); };
extern T_func_009927b0 G1_func_009927b0;
void func_009927b0()
{
    G1_func_009927b0.m();
}
