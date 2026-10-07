// roc 2010-06 009ded50  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ded50
//
// 009ded50  b970b3c000           mov ecx, 0xc0b370
// 009ded55  e91678bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009ded50 { void m(); };
extern T_func_009ded50 G1_func_009ded50;
void func_009ded50()
{
    G1_func_009ded50.m();
}
