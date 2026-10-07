// roc 2010-06 009e06e0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e06e0
//
// 009e06e0  b9903bc100           mov ecx, 0xc13b90
// 009e06e5  e9969ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e06e0 { void m(); };
extern T_func_009e06e0 G1_func_009e06e0;
void func_009e06e0()
{
    G1_func_009e06e0.m();
}
