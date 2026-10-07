// roc 2010-06 00996310  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00996310
//
// 00996310  b90489c100           mov ecx, 0xc18904
// 00996315  e9a6ceb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00996310 { void m(); };
extern T_func_00996310 G1_func_00996310;
void func_00996310()
{
    G1_func_00996310.m();
}
