// roc 2010-06 009a3790  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3790
//
// 009a3790  b9c0f2c100           mov ecx, 0xc1f2c0
// 009a3795  e926faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3790 { void m(); };
extern T_func_009a3790 G1_func_009a3790;
void func_009a3790()
{
    G1_func_009a3790.m();
}
