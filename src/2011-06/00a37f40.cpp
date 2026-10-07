// roc 2011-06 00a37f40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f40
//
// 00a37f40  b9008acc00           mov ecx, 0xcc8a00
// 00a37f45  e90687b5ff           jmp 0x590650
// auto-matched from its assembly shape

struct T_func_00a37f40 { void m(); };
extern T_func_00a37f40 G1_func_00a37f40;
void func_00a37f40()
{
    G1_func_00a37f40.m();
}
