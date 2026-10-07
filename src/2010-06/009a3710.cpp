// roc 2010-06 009a3710  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3710
//
// 009a3710  b9a4efc100           mov ecx, 0xc1efa4
// 009a3715  e9a6faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3710 { void m(); };
extern T_func_009a3710 G1_func_009a3710;
void func_009a3710()
{
    G1_func_009a3710.m();
}
