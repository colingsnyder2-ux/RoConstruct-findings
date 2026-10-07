// roc 2010-06 009dc3c0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc3c0
//
// 009dc3c0  b9d043c000           mov ecx, 0xc043d0
// 009dc3c5  e9a6a1bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dc3c0 { void m(); };
extern T_func_009dc3c0 G1_func_009dc3c0;
void func_009dc3c0()
{
    G1_func_009dc3c0.m();
}
