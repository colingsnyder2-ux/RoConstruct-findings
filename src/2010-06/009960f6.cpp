// roc 2010-06 009960f6  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009960f6
//
// 009960f6  b97488c100           mov ecx, 0xc18874
// 009960fb  e960a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_009960f6 { void m(); };
extern T_func_009960f6 G1_func_009960f6;
void func_009960f6()
{
    G1_func_009960f6.m();
}
