// roc 2010-06 009e3220  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3220
//
// 009e3220  b968a2c100           mov ecx, 0xc1a268
// 009e3225  e94633bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3220 { void m(); };
extern T_func_009e3220 G1_func_009e3220;
void func_009e3220()
{
    G1_func_009e3220.m();
}
