// roc 2011-06 00a3d130  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d130
//
// 00a3d130  b95819cd00           mov ecx, 0xcd1958
// 00a3d135  e9d6f3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d130 { void m(); };
extern T_func_00a3d130 G1_func_00a3d130;
void func_00a3d130()
{
    G1_func_00a3d130.m();
}
