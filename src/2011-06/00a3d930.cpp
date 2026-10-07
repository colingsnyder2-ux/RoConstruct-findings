// roc 2011-06 00a3d930  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d930
//
// 00a3d930  b95826cd00           mov ecx, 0xcd2658
// 00a3d935  e9b604beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3d930 { void m(); };
extern T_func_00a3d930 G1_func_00a3d930;
void func_00a3d930()
{
    G1_func_00a3d930.m();
}
