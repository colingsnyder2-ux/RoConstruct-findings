// roc 2011-06 00a37a60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37a60
//
// 00a37a60  b9080acc00           mov ecx, 0xcc0a08
// 00a37a65  e9d6609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37a60 { void m(); };
extern T_func_00a37a60 G1_func_00a37a60;
void func_00a37a60()
{
    G1_func_00a37a60.m();
}
