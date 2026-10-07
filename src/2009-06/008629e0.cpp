// roc 2009-06 008629e0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008629e0
//
// 008629e0  b9983ca400           mov ecx, 0xa43c98
// 008629e5  e9660dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008629e0 { void m(); };
extern T_func_008629e0 G1_func_008629e0;
void func_008629e0()
{
    G1_func_008629e0.m();
}
