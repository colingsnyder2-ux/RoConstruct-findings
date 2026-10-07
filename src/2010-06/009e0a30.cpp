// roc 2010-06 009e0a30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0a30
//
// 009e0a30  b99006c100           mov ecx, 0xc10690
// 009e0a35  e9469ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0a30 { void m(); };
extern T_func_009e0a30 G1_func_009e0a30;
void func_009e0a30()
{
    G1_func_009e0a30.m();
}
