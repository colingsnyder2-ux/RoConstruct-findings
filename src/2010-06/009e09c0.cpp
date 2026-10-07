// roc 2010-06 009e09c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e09c0
//
// 009e09c0  b9900dc100           mov ecx, 0xc10d90
// 009e09c5  e9b69ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e09c0 { void m(); };
extern T_func_009e09c0 G1_func_009e09c0;
void func_009e09c0()
{
    G1_func_009e09c0.m();
}
