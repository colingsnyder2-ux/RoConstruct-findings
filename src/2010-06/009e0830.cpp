// roc 2010-06 009e0830  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0830
//
// 009e0830  b99026c100           mov ecx, 0xc12690
// 009e0835  e9469da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0830 { void m(); };
extern T_func_009e0830 G1_func_009e0830;
void func_009e0830()
{
    G1_func_009e0830.m();
}
