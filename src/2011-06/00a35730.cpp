// roc 2011-06 00a35730  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35730
//
// 00a35730  b9c0decb00           mov ecx, 0xcbdec0
// 00a35735  e9d66da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35730 { void m(); };
extern T_func_00a35730 G1_func_00a35730;
void func_00a35730()
{
    G1_func_00a35730.m();
}
