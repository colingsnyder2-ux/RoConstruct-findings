// roc 2010-06 009e7c50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7c50
//
// 009e7c50  b9c015c200           mov ecx, 0xc215c0
// 009e7c55  e916e9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7c50 { void m(); };
extern T_func_009e7c50 G1_func_009e7c50;
void func_009e7c50()
{
    G1_func_009e7c50.m();
}
