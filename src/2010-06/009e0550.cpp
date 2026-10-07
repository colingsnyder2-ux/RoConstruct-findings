// roc 2010-06 009e0550  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0550
//
// 009e0550  b99054c100           mov ecx, 0xc15490
// 009e0555  e926a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0550 { void m(); };
extern T_func_009e0550 G1_func_009e0550;
void func_009e0550()
{
    G1_func_009e0550.m();
}
