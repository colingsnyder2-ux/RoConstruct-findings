// roc 2009-06 008985d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008985d0
//
// 008985d0  b9d07ca400           mov ecx, 0xa47cd0
// 008985d5  e9361db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008985d0 { void m(); };
extern T_func_008985d0 G1_func_008985d0;
void func_008985d0()
{
    G1_func_008985d0.m();
}
