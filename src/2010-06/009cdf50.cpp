// roc 2010-06 009cdf50  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cdf50
//
// 009cdf50  b95892c100           mov ecx, 0xc19258
// 009cdf55  e966a5b8ff           jmp 0x5584c0
// auto-matched from its assembly shape

struct T_func_009cdf50 { void m(); };
extern T_func_009cdf50 G1_func_009cdf50;
void func_009cdf50()
{
    G1_func_009cdf50.m();
}
