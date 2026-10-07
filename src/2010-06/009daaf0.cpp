// roc 2010-06 009daaf0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009daaf0
//
// 009daaf0  b9d8fdbf00           mov ecx, 0xbffdd8
// 009daaf5  e986faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009daaf0 { void m(); };
extern T_func_009daaf0 G1_func_009daaf0;
void func_009daaf0()
{
    G1_func_009daaf0.m();
}
