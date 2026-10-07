// roc 2010-06 009daae0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009daae0
//
// 009daae0  b9f0ffbf00           mov ecx, 0xbffff0
// 009daae5  e996faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009daae0 { void m(); };
extern T_func_009daae0 G1_func_009daae0;
void func_009daae0()
{
    G1_func_009daae0.m();
}
