// roc 2010-06 009a50e0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a50e0
//
// 009a50e0  b96809c200           mov ecx, 0xc20968
// 009a50e5  e9d6e0afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a50e0 { void m(); };
extern T_func_009a50e0 G1_func_009a50e0;
void func_009a50e0()
{
    G1_func_009a50e0.m();
}
