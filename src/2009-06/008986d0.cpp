// roc 2009-06 008986d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008986d0
//
// 008986d0  b95070a400           mov ecx, 0xa47050
// 008986d5  e9361cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008986d0 { void m(); };
extern T_func_008986d0 G1_func_008986d0;
void func_008986d0()
{
    G1_func_008986d0.m();
}
