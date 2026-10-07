// roc 2011-06 00a32fb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32fb0
//
// 00a32fb0  b96069cb00           mov ecx, 0xcb6960
// 00a32fb5  e906a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32fb0 { void m(); };
extern T_func_00a32fb0 G1_func_00a32fb0;
void func_00a32fb0()
{
    G1_func_00a32fb0.m();
}
