// roc 2011-06 00a3d5b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d5b0
//
// 00a3d5b0  b99821cd00           mov ecx, 0xcd2198
// 00a3d5b5  e93608beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3d5b0 { void m(); };
extern T_func_00a3d5b0 G1_func_00a3d5b0;
void func_00a3d5b0()
{
    G1_func_00a3d5b0.m();
}
