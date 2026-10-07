// roc 2010-06 009e91ca  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e91ca
//
// 009e91ca  b92867c200           mov ecx, 0xc26728
// 009e91cf  e94a09ecff           jmp 0x8a9b1e
// auto-matched from its assembly shape

struct T_func_009e91ca { void m(); };
extern T_func_009e91ca G1_func_009e91ca;
void func_009e91ca()
{
    G1_func_009e91ca.m();
}
