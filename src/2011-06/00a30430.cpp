// roc 2011-06 00a30430  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30430
//
// 00a30430  b9b01ccb00           mov ecx, 0xcb1cb0
// 00a30435  e906d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a30430 { void m(); };
extern T_func_00a30430 G1_func_00a30430;
void func_00a30430()
{
    G1_func_00a30430.m();
}
