// roc 2010-06 009e0960  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0960
//
// 009e0960  b99013c100           mov ecx, 0xc11390
// 009e0965  e9169ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0960 { void m(); };
extern T_func_009e0960 G1_func_009e0960;
void func_009e0960()
{
    G1_func_009e0960.m();
}
