// roc 2010-06 009e5220  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5220
//
// 009e5220  b9e0ddc100           mov ecx, 0xc1dde0
// 009e5225  e94613bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5220 { void m(); };
extern T_func_009e5220 G1_func_009e5220;
void func_009e5220()
{
    G1_func_009e5220.m();
}
