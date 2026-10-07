// roc 2011-06 00a334c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a334c0
//
// 00a334c0  b9707acb00           mov ecx, 0xcb7a70
// 00a334c5  e9f69ba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a334c0 { void m(); };
extern T_func_00a334c0 G1_func_00a334c0;
void func_00a334c0()
{
    G1_func_00a334c0.m();
}
