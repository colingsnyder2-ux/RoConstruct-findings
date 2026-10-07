// roc 2011-06 00a343b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a343b0
//
// 00a343b0  b9d0a3cb00           mov ecx, 0xcba3d0
// 00a343b5  e91698cdff           jmp 0x70dbd0
// auto-matched from its assembly shape

struct T_func_00a343b0 { void m(); };
extern T_func_00a343b0 G1_func_00a343b0;
void func_00a343b0()
{
    G1_func_00a343b0.m();
}
