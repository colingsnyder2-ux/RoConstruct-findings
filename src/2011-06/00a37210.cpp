// roc 2011-06 00a37210  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37210
//
// 00a37210  b9407acc00           mov ecx, 0xcc7a40
// 00a37215  e926699dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37210 { void m(); };
extern T_func_00a37210 G1_func_00a37210;
void func_00a37210()
{
    G1_func_00a37210.m();
}
