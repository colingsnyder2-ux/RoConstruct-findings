// roc 2010-06 0098b3b0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098b3b0
//
// 0098b3b0  b9bc5dc000           mov ecx, 0xc05dbc
// 0098b3b5  e9067eb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098b3b0 { void m(); };
extern T_func_0098b3b0 G1_func_0098b3b0;
void func_0098b3b0()
{
    G1_func_0098b3b0.m();
}
