// roc 2009-06 008985c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008985c0
//
// 008985c0  b9987da400           mov ecx, 0xa47d98
// 008985c5  e9461db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008985c0 { void m(); };
extern T_func_008985c0 G1_func_008985c0;
void func_008985c0()
{
    G1_func_008985c0.m();
}
