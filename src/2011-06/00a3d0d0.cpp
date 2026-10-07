// roc 2011-06 00a3d0d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d0d0
//
// 00a3d0d0  b95018cd00           mov ecx, 0xcd1850
// 00a3d0d5  e9e6ffa6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d0d0 { void m(); };
extern T_func_00a3d0d0 G1_func_00a3d0d0;
void func_00a3d0d0()
{
    G1_func_00a3d0d0.m();
}
