// roc 2010-06 009a6f60  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6f60
//
// 009a6f60  b9a823c200           mov ecx, 0xc223a8
// 009a6f65  e956c2afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6f60 { void m(); };
extern T_func_009a6f60 G1_func_009a6f60;
void func_009a6f60()
{
    G1_func_009a6f60.m();
}
