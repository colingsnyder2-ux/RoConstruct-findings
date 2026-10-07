// roc 2010-06 009e3d30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3d30
//
// 009e3d30  b990bcc100           mov ecx, 0xc1bc90
// 009e3d35  e93628bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3d30 { void m(); };
extern T_func_009e3d30 G1_func_009e3d30;
void func_009e3d30()
{
    G1_func_009e3d30.m();
}
