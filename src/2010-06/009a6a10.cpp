// roc 2010-06 009a6a10  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6a10
//
// 009a6a10  b9b819c200           mov ecx, 0xc219b8
// 009a6a15  e9a6c7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6a10 { void m(); };
extern T_func_009a6a10 G1_func_009a6a10;
void func_009a6a10()
{
    G1_func_009a6a10.m();
}
