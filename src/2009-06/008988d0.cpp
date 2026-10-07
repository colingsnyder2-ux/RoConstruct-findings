// roc 2009-06 008988d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008988d0
//
// 008988d0  b95057a400           mov ecx, 0xa45750
// 008988d5  e9361ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008988d0 { void m(); };
extern T_func_008988d0 G1_func_008988d0;
void func_008988d0()
{
    G1_func_008988d0.m();
}
