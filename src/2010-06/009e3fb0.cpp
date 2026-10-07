// roc 2010-06 009e3fb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3fb0
//
// 009e3fb0  b930c1c100           mov ecx, 0xc1c130
// 009e3fb5  e9b625bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3fb0 { void m(); };
extern T_func_009e3fb0 G1_func_009e3fb0;
void func_009e3fb0()
{
    G1_func_009e3fb0.m();
}
