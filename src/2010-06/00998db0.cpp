// roc 2010-06 00998db0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00998db0
//
// 00998db0  b9a498c100           mov ecx, 0xc198a4
// 00998db5  e906a4b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00998db0 { void m(); };
extern T_func_00998db0 G1_func_00998db0;
void func_00998db0()
{
    G1_func_00998db0.m();
}
