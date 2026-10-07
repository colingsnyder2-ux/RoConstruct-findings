// roc 2010-06 009e0bc0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0bc0
//
// 009e0bc0  b990edc000           mov ecx, 0xc0ed90
// 009e0bc5  e9b699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0bc0 { void m(); };
extern T_func_009e0bc0 G1_func_009e0bc0;
void func_009e0bc0()
{
    G1_func_009e0bc0.m();
}
