// roc 2010-06 009e0df0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0df0
//
// 009e0df0  b990cac000           mov ecx, 0xc0ca90
// 009e0df5  e98697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0df0 { void m(); };
extern T_func_009e0df0 G1_func_009e0df0;
void func_009e0df0()
{
    G1_func_009e0df0.m();
}
