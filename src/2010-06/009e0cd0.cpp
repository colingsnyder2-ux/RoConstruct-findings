// roc 2010-06 009e0cd0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0cd0
//
// 009e0cd0  b990dcc000           mov ecx, 0xc0dc90
// 009e0cd5  e9a698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0cd0 { void m(); };
extern T_func_009e0cd0 G1_func_009e0cd0;
void func_009e0cd0()
{
    G1_func_009e0cd0.m();
}
