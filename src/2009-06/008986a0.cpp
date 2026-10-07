// roc 2009-06 008986a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008986a0
//
// 008986a0  b9a872a400           mov ecx, 0xa472a8
// 008986a5  e9661cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008986a0 { void m(); };
extern T_func_008986a0 G1_func_008986a0;
void func_008986a0()
{
    G1_func_008986a0.m();
}
