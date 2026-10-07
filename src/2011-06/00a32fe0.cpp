// roc 2011-06 00a32fe0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32fe0
//
// 00a32fe0  b9206bcb00           mov ecx, 0xcb6b20
// 00a32fe5  e9d6a0a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32fe0 { void m(); };
extern T_func_00a32fe0 G1_func_00a32fe0;
void func_00a32fe0()
{
    G1_func_00a32fe0.m();
}
