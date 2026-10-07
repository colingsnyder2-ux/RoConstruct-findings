// roc 2010-06 009dab40  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dab40
//
// 009dab40  b9f001c000           mov ecx, 0xc001f0
// 009dab45  e936faa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dab40 { void m(); };
extern T_func_009dab40 G1_func_009dab40;
void func_009dab40()
{
    G1_func_009dab40.m();
}
