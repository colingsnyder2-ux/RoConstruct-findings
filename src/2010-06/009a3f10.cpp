// roc 2010-06 009a3f10  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3f10
//
// 009a3f10  b92cfdc100           mov ecx, 0xc1fd2c
// 009a3f15  e9a6f2afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3f10 { void m(); };
extern T_func_009a3f10 G1_func_009a3f10;
void func_009a3f10()
{
    G1_func_009a3f10.m();
}
