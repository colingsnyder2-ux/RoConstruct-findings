// roc 2010-06 009960de  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009960de
//
// 009960de  b97488c100           mov ecx, 0xc18874
// 009960e3  e978a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_009960de { void m(); };
extern T_func_009960de G1_func_009960de;
void func_009960de()
{
    G1_func_009960de.m();
}
