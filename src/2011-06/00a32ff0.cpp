// roc 2011-06 00a32ff0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32ff0
//
// 00a32ff0  b9786ccb00           mov ecx, 0xcb6c78
// 00a32ff5  e9c6a0a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32ff0 { void m(); };
extern T_func_00a32ff0 G1_func_00a32ff0;
void func_00a32ff0()
{
    G1_func_00a32ff0.m();
}
