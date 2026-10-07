// roc 2010-06 009820f0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009820f0
//
// 009820f0  b96c1dc000           mov ecx, 0xc01d6c
// 009820f5  e966e6dbff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_009820f0 { void m(); };
extern T_func_009820f0 G1_func_009820f0;
void func_009820f0()
{
    G1_func_009820f0.m();
}
