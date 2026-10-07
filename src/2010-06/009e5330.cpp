// roc 2010-06 009e5330  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5330
//
// 009e5330  b9b8dec100           mov ecx, 0xc1deb8
// 009e5335  e93612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5330 { void m(); };
extern T_func_009e5330 G1_func_009e5330;
void func_009e5330()
{
    G1_func_009e5330.m();
}
