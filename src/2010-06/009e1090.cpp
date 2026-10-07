// roc 2010-06 009e1090  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1090
//
// 009e1090  b99061c100           mov ecx, 0xc16190
// 009e1095  e956babcff           jmp 0x5acaf0
// auto-matched from its assembly shape

struct T_func_009e1090 { void m(); };
extern T_func_009e1090 G1_func_009e1090;
void func_009e1090()
{
    G1_func_009e1090.m();
}
