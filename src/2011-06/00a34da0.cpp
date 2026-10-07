// roc 2011-06 00a34da0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34da0
//
// 00a34da0  b948bacb00           mov ecx, 0xcbba48
// 00a34da5  e96677a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34da0 { void m(); };
extern T_func_00a34da0 G1_func_00a34da0;
void func_00a34da0()
{
    G1_func_00a34da0.m();
}
