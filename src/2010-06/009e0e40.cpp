// roc 2010-06 009e0e40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e40
//
// 009e0e40  b990c5c000           mov ecx, 0xc0c590
// 009e0e45  e93697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0e40 { void m(); };
extern T_func_009e0e40 G1_func_009e0e40;
void func_009e0e40()
{
    G1_func_009e0e40.m();
}
