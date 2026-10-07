// roc 2010-06 009dbc80  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dbc80
//
// 009dbc80  b9681cc000           mov ecx, 0xc01c68
// 009dbc85  e92695a7ff           jmp 0x4551b0
// auto-matched from its assembly shape

struct T_func_009dbc80 { void m(); };
extern T_func_009dbc80 G1_func_009dbc80;
void func_009dbc80()
{
    G1_func_009dbc80.m();
}
