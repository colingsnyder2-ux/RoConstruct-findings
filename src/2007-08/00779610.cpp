// roc 2007-08 00779610  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779610
//
// 00779610  b910158c00           mov ecx, 0x8c1510
// 00779615  e9f6dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779610 { void m(); };
extern T_func_00779610 G1_func_00779610;
void func_00779610()
{
    G1_func_00779610.m();
}
