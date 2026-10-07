// roc 2009-06 00896390  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896390
//
// 00896390  b91806a400           mov ecx, 0xa40618
// 00896395  e9b6a4c7ff           jmp 0x510850
// auto-matched from its assembly shape

struct T_func_00896390 { void m(); };
extern T_func_00896390 G1_func_00896390;
void func_00896390()
{
    G1_func_00896390.m();
}
