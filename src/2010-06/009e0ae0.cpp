// roc 2010-06 009e0ae0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ae0
//
// 009e0ae0  b990fbc000           mov ecx, 0xc0fb90
// 009e0ae5  e9969aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0ae0 { void m(); };
extern T_func_009e0ae0 G1_func_009e0ae0;
void func_009e0ae0()
{
    G1_func_009e0ae0.m();
}
