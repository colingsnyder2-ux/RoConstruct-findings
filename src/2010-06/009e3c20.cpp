// roc 2010-06 009e3c20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3c20
//
// 009e3c20  b938b6c100           mov ecx, 0xc1b638
// 009e3c25  e94629bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3c20 { void m(); };
extern T_func_009e3c20 G1_func_009e3c20;
void func_009e3c20()
{
    G1_func_009e3c20.m();
}
