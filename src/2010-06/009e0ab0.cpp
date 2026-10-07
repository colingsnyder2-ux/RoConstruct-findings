// roc 2010-06 009e0ab0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ab0
//
// 009e0ab0  b990fec000           mov ecx, 0xc0fe90
// 009e0ab5  e9c69aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0ab0 { void m(); };
extern T_func_009e0ab0 G1_func_009e0ab0;
void func_009e0ab0()
{
    G1_func_009e0ab0.m();
}
