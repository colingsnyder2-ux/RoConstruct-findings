// roc 2011-06 00a37660  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37660
//
// 00a37660  b90840cc00           mov ecx, 0xcc4008
// 00a37665  e9d6649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37660 { void m(); };
extern T_func_00a37660 G1_func_00a37660;
void func_00a37660()
{
    G1_func_00a37660.m();
}
