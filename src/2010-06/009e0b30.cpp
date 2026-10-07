// roc 2010-06 009e0b30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b30
//
// 009e0b30  b990f6c000           mov ecx, 0xc0f690
// 009e0b35  e9469aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b30 { void m(); };
extern T_func_009e0b30 G1_func_009e0b30;
void func_009e0b30()
{
    G1_func_009e0b30.m();
}
