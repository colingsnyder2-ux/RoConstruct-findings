// roc 2011-06 00a32fd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32fd0
//
// 00a32fd0  b9f86bcb00           mov ecx, 0xcb6bf8
// 00a32fd5  e9e6a0a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32fd0 { void m(); };
extern T_func_00a32fd0 G1_func_00a32fd0;
void func_00a32fd0()
{
    G1_func_00a32fd0.m();
}
