// roc 2010-06 009e0b40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b40
//
// 009e0b40  b990f5c000           mov ecx, 0xc0f590
// 009e0b45  e9369aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b40 { void m(); };
extern T_func_009e0b40 G1_func_009e0b40;
void func_009e0b40()
{
    G1_func_009e0b40.m();
}
