// roc 2010-06 009e0500  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0500
//
// 009e0500  b99059c100           mov ecx, 0xc15990
// 009e0505  e976a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0500 { void m(); };
extern T_func_009e0500 G1_func_009e0500;
void func_009e0500()
{
    G1_func_009e0500.m();
}
