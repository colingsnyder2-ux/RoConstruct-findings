// roc 2011-06 00a35010  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35010
//
// 00a35010  b9c0becb00           mov ecx, 0xcbbec0
// 00a35015  e9f674a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35010 { void m(); };
extern T_func_00a35010 G1_func_00a35010;
void func_00a35010()
{
    G1_func_00a35010.m();
}
