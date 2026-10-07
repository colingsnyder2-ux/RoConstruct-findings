// roc 2011-06 00a35410  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35410
//
// 00a35410  b9a8cdcb00           mov ecx, 0xcbcda8
// 00a35415  e9f670a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35410 { void m(); };
extern T_func_00a35410 G1_func_00a35410;
void func_00a35410()
{
    G1_func_00a35410.m();
}
