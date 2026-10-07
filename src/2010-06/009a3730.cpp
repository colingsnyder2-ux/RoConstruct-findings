// roc 2010-06 009a3730  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3730
//
// 009a3730  b91cf3c100           mov ecx, 0xc1f31c
// 009a3735  e986faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3730 { void m(); };
extern T_func_009a3730 G1_func_009a3730;
void func_009a3730()
{
    G1_func_009a3730.m();
}
