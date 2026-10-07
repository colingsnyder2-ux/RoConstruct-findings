// roc 2009-06 00898540  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898540
//
// 00898540  b9d883a400           mov ecx, 0xa483d8
// 00898545  e9c61db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898540 { void m(); };
extern T_func_00898540 G1_func_00898540;
void func_00898540()
{
    G1_func_00898540.m();
}
