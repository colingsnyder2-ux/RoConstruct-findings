// roc 2010-06 009de8f0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de8f0
//
// 009de8f0  b9b0a5c000           mov ecx, 0xc0a5b0
// 009de8f5  e9a60cbbff           jmp 0x58f5a0
// auto-matched from its assembly shape

struct T_func_009de8f0 { void m(); };
extern T_func_009de8f0 G1_func_009de8f0;
void func_009de8f0()
{
    G1_func_009de8f0.m();
}
