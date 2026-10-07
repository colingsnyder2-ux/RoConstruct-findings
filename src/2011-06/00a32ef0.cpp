// roc 2011-06 00a32ef0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32ef0
//
// 00a32ef0  b9286dcb00           mov ecx, 0xcb6d28
// 00a32ef5  e9c6a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32ef0 { void m(); };
extern T_func_00a32ef0 G1_func_00a32ef0;
void func_00a32ef0()
{
    G1_func_00a32ef0.m();
}
