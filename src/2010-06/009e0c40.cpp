// roc 2010-06 009e0c40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c40
//
// 009e0c40  b990e5c000           mov ecx, 0xc0e590
// 009e0c45  e93699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c40 { void m(); };
extern T_func_009e0c40 G1_func_009e0c40;
void func_009e0c40()
{
    G1_func_009e0c40.m();
}
