// roc 2010-06 009e08f0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e08f0
//
// 009e08f0  b9901ac100           mov ecx, 0xc11a90
// 009e08f5  e9869ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e08f0 { void m(); };
extern T_func_009e08f0 G1_func_009e08f0;
void func_009e08f0()
{
    G1_func_009e08f0.m();
}
