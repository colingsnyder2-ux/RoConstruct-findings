// roc 2011-06 00a37c80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37c80
//
// 00a37c80  b958edcb00           mov ecx, 0xcbed58
// 00a37c85  e9b65e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37c80 { void m(); };
extern T_func_00a37c80 G1_func_00a37c80;
void func_00a37c80()
{
    G1_func_00a37c80.m();
}
