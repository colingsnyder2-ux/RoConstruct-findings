// roc 2010-06 009dcbf0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcbf0
//
// 009dcbf0  b90050c000           mov ecx, 0xc05000
// 009dcbf5  e97699bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dcbf0 { void m(); };
extern T_func_009dcbf0 G1_func_009dcbf0;
void func_009dcbf0()
{
    G1_func_009dcbf0.m();
}
