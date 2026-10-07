// roc 2010-06 009e2530  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2530
//
// 009e2530  b9a08dc100           mov ecx, 0xc18da0
// 009e2535  e93640bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2530 { void m(); };
extern T_func_009e2530 G1_func_009e2530;
void func_009e2530()
{
    G1_func_009e2530.m();
}
