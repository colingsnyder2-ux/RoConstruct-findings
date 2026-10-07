// roc 2009-06 00897380  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897380
//
// 00897380  b9f83fa400           mov ecx, 0xa43ff8
// 00897385  e976a8dbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_00897380 { void m(); };
extern T_func_00897380 G1_func_00897380;
void func_00897380()
{
    G1_func_00897380.m();
}
