// roc 2011-06 00a31600  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31600
//
// 00a31600  b9102fcb00           mov ecx, 0xcb2f10
// 00a31605  e9a61aa2ff           jmp 0x4530b0
// auto-matched from its assembly shape

struct T_func_00a31600 { void m(); };
extern T_func_00a31600 G1_func_00a31600;
void func_00a31600()
{
    G1_func_00a31600.m();
}
