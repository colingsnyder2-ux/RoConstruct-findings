// roc 2010-06 009e0800  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0800
//
// 009e0800  b99029c100           mov ecx, 0xc12990
// 009e0805  e9769da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0800 { void m(); };
extern T_func_009e0800 G1_func_009e0800;
void func_009e0800()
{
    G1_func_009e0800.m();
}
