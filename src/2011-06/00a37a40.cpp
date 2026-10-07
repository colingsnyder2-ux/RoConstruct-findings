// roc 2011-06 00a37a40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37a40
//
// 00a37a40  b9b80bcc00           mov ecx, 0xcc0bb8
// 00a37a45  e9f6609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37a40 { void m(); };
extern T_func_00a37a40 G1_func_00a37a40;
void func_00a37a40()
{
    G1_func_00a37a40.m();
}
