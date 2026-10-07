// roc 2010-06 009de910  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de910
//
// 009de910  b9a0a3c000           mov ecx, 0xc0a3a0
// 009de915  e9f61dbbff           jmp 0x590710
// auto-matched from its assembly shape

struct T_func_009de910 { void m(); };
extern T_func_009de910 G1_func_009de910;
void func_009de910()
{
    G1_func_009de910.m();
}
