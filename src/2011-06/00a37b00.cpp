// roc 2011-06 00a37b00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b00
//
// 00a37b00  b99801cc00           mov ecx, 0xcc0198
// 00a37b05  e936609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b00 { void m(); };
extern T_func_00a37b00 G1_func_00a37b00;
void func_00a37b00()
{
    G1_func_00a37b00.m();
}
