// roc 2010-06 009991e0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009991e0
//
// 009991e0  b9d49ac100           mov ecx, 0xc19ad4
// 009991e5  e9d69fb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009991e0 { void m(); };
extern T_func_009991e0 G1_func_009991e0;
void func_009991e0()
{
    G1_func_009991e0.m();
}
