// roc 2010-06 009a6a90  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6a90
//
// 009a6a90  b97c19c200           mov ecx, 0xc2197c
// 009a6a95  e926c7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6a90 { void m(); };
extern T_func_009a6a90 G1_func_009a6a90;
void func_009a6a90()
{
    G1_func_009a6a90.m();
}
