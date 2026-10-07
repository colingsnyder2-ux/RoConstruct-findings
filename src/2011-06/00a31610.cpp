// roc 2011-06 00a31610  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31610
//
// 00a31610  b9682ecb00           mov ecx, 0xcb2e68
// 00a31615  e97618a2ff           jmp 0x452e90
// auto-matched from its assembly shape

struct T_func_00a31610 { void m(); };
extern T_func_00a31610 G1_func_00a31610;
void func_00a31610()
{
    G1_func_00a31610.m();
}
