// roc 2010-06 009a6d40  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6d40
//
// 009a6d40  b98c1dc200           mov ecx, 0xc21d8c
// 009a6d45  e976c4afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6d40 { void m(); };
extern T_func_009a6d40 G1_func_009a6d40;
void func_009a6d40()
{
    G1_func_009a6d40.m();
}
