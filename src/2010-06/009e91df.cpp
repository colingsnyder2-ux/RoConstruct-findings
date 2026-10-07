// roc 2010-06 009e91df  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e91df
//
// 009e91df  b95067c200           mov ecx, 0xc26750
// 009e91e4  e9b40becff           jmp 0x8a9d9d
// auto-matched from its assembly shape

struct T_func_009e91df { void m(); };
extern T_func_009e91df G1_func_009e91df;
void func_009e91df()
{
    G1_func_009e91df.m();
}
