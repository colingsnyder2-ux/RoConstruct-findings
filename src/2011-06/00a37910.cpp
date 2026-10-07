// roc 2011-06 00a37910  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37910
//
// 00a37910  b9c01bcc00           mov ecx, 0xcc1bc0
// 00a37915  e926629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37910 { void m(); };
extern T_func_00a37910 G1_func_00a37910;
void func_00a37910()
{
    G1_func_00a37910.m();
}
