// roc 2010-06 009de980  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de980
//
// 009de980  b948b1c000           mov ecx, 0xc0b148
// 009de985  e9c628d1ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009de980 { void m(); };
extern T_func_009de980 G1_func_009de980;
void func_009de980()
{
    G1_func_009de980.m();
}
