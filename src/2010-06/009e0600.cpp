// roc 2010-06 009e0600  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0600
//
// 009e0600  b99049c100           mov ecx, 0xc14990
// 009e0605  e9769fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0600 { void m(); };
extern T_func_009e0600 G1_func_009e0600;
void func_009e0600()
{
    G1_func_009e0600.m();
}
