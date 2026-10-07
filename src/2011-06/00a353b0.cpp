// roc 2011-06 00a353b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a353b0
//
// 00a353b0  b998cfcb00           mov ecx, 0xcbcf98
// 00a353b5  e95671a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a353b0 { void m(); };
extern T_func_00a353b0 G1_func_00a353b0;
void func_00a353b0()
{
    G1_func_00a353b0.m();
}
