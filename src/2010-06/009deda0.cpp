// roc 2010-06 009deda0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009deda0
//
// 009deda0  b990b7c000           mov ecx, 0xc0b790
// 009deda5  e9d6b7a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009deda0 { void m(); };
extern T_func_009deda0 G1_func_009deda0;
void func_009deda0()
{
    G1_func_009deda0.m();
}
