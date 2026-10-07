// roc 2010-06 009dcc50  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcc50
//
// 009dcc50  b9684ec000           mov ecx, 0xc04e68
// 009dcc55  e9f645d1ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009dcc50 { void m(); };
extern T_func_009dcc50 G1_func_009dcc50;
void func_009dcc50()
{
    G1_func_009dcc50.m();
}
