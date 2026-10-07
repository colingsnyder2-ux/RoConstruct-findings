// roc 2010-06 00998dd0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00998dd0
//
// 00998dd0  b90099c100           mov ecx, 0xc19900
// 00998dd5  e9e6a3b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00998dd0 { void m(); };
extern T_func_00998dd0 G1_func_00998dd0;
void func_00998dd0()
{
    G1_func_00998dd0.m();
}
