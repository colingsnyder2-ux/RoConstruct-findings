// roc 2010-06 009daac0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009daac0
//
// 009daac0  b9d8fbbf00           mov ecx, 0xbffbd8
// 009daac5  e9b6faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009daac0 { void m(); };
extern T_func_009daac0 G1_func_009daac0;
void func_009daac0()
{
    G1_func_009daac0.m();
}
