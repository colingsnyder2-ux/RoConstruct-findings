// roc 2010-06 009e0a70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0a70
//
// 009e0a70  b99002c100           mov ecx, 0xc10290
// 009e0a75  e9069ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0a70 { void m(); };
extern T_func_009e0a70 G1_func_009e0a70;
void func_009e0a70()
{
    G1_func_009e0a70.m();
}
