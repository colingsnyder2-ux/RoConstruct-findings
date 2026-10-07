// roc 2011-06 00a32680  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32680
//
// 00a32680  b9c863cb00           mov ecx, 0xcb63c8
// 00a32685  e936aaa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32680 { void m(); };
extern T_func_00a32680 G1_func_00a32680;
void func_00a32680()
{
    G1_func_00a32680.m();
}
