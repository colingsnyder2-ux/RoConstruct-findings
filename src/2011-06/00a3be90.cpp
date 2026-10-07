// roc 2011-06 00a3be90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3be90
//
// 00a3be90  b9c0f9cc00           mov ecx, 0xccf9c0
// 00a3be95  e92612a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3be90 { void m(); };
extern T_func_00a3be90 G1_func_00a3be90;
void func_00a3be90()
{
    G1_func_00a3be90.m();
}
