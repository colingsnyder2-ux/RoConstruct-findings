// roc 2010-06 009de8c0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de8c0
//
// 009de8c0  b980a8c000           mov ecx, 0xc0a880
// 009de8c5  e96616bbff           jmp 0x58ff30
// auto-matched from its assembly shape

struct T_func_009de8c0 { void m(); };
extern T_func_009de8c0 G1_func_009de8c0;
void func_009de8c0()
{
    G1_func_009de8c0.m();
}
