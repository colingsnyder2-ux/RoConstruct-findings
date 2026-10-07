// roc 2010-06 009927f0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009927f0
//
// 009927f0  b930bbc000           mov ecx, 0xc0bb30
// 009927f5  e9c609b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009927f0 { void m(); };
extern T_func_009927f0 G1_func_009927f0;
void func_009927f0()
{
    G1_func_009927f0.m();
}
