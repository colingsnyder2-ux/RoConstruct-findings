// roc 2011-06 00a37380  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37380
//
// 00a37380  b9d866cc00           mov ecx, 0xcc66d8
// 00a37385  e9b6679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37380 { void m(); };
extern T_func_00a37380 G1_func_00a37380;
void func_00a37380()
{
    G1_func_00a37380.m();
}
