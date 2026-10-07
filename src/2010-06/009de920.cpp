// roc 2010-06 009de920  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de920
//
// 009de920  b990a4c000           mov ecx, 0xc0a490
// 009de925  e9a6c4d7ff           jmp 0x75add0
// auto-matched from its assembly shape

struct T_func_009de920 { void m(); };
extern T_func_009de920 G1_func_009de920;
void func_009de920()
{
    G1_func_009de920.m();
}
