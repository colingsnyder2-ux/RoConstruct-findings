// roc 2010-06 00999200  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00999200
//
// 00999200  b96099c100           mov ecx, 0xc19960
// 00999205  e9b69fb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00999200 { void m(); };
extern T_func_00999200 G1_func_00999200;
void func_00999200()
{
    G1_func_00999200.m();
}
