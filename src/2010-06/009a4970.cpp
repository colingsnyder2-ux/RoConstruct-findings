// roc 2010-06 009a4970  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a4970
//
// 009a4970  b9a006c200           mov ecx, 0xc206a0
// 009a4975  e946e8afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a4970 { void m(); };
extern T_func_009a4970 G1_func_009a4970;
void func_009a4970()
{
    G1_func_009a4970.m();
}
