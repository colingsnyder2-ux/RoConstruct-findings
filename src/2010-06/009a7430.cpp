// roc 2010-06 009a7430  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a7430
//
// 009a7430  b9c026c200           mov ecx, 0xc226c0
// 009a7435  e986bdafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a7430 { void m(); };
extern T_func_009a7430 G1_func_009a7430;
void func_009a7430()
{
    G1_func_009a7430.m();
}
