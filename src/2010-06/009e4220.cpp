// roc 2010-06 009e4220  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4220
//
// 009e4220  b918c6c100           mov ecx, 0xc1c618
// 009e4225  e94623bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e4220 { void m(); };
extern T_func_009e4220 G1_func_009e4220;
void func_009e4220()
{
    G1_func_009e4220.m();
}
