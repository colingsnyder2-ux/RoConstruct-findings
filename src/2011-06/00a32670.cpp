// roc 2011-06 00a32670  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32670
//
// 00a32670  b9685acb00           mov ecx, 0xcb5a68
// 00a32675  e946aaa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32670 { void m(); };
extern T_func_00a32670 G1_func_00a32670;
void func_00a32670()
{
    G1_func_00a32670.m();
}
