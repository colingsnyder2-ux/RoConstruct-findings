// roc 2010-06 009debf0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009debf0
//
// 009debf0  b920b5c000           mov ecx, 0xc0b520
// 009debf5  e97679bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009debf0 { void m(); };
extern T_func_009debf0 G1_func_009debf0;
void func_009debf0()
{
    G1_func_009debf0.m();
}
