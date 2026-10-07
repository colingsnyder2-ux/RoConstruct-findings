// roc 2010-06 009de8e0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de8e0
//
// 009de8e0  b9a0a6c000           mov ecx, 0xc0a6a0
// 009de8e5  e9e60fbbff           jmp 0x58f8d0
// auto-matched from its assembly shape

struct T_func_009de8e0 { void m(); };
extern T_func_009de8e0 G1_func_009de8e0;
void func_009de8e0()
{
    G1_func_009de8e0.m();
}
