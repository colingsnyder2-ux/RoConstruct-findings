// roc 2011-06 00a37af0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37af0
//
// 00a37af0  b97002cc00           mov ecx, 0xcc0270
// 00a37af5  e946609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37af0 { void m(); };
extern T_func_00a37af0 G1_func_00a37af0;
void func_00a37af0()
{
    G1_func_00a37af0.m();
}
