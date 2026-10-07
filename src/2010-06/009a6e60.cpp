// roc 2010-06 009a6e60  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6e60
//
// 009a6e60  b9b01fc200           mov ecx, 0xc21fb0
// 009a6e65  e956c3afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6e60 { void m(); };
extern T_func_009a6e60 G1_func_009a6e60;
void func_009a6e60()
{
    G1_func_009a6e60.m();
}
