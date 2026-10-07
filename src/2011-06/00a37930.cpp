// roc 2011-06 00a37930  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37930
//
// 00a37930  b9101acc00           mov ecx, 0xcc1a10
// 00a37935  e906629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37930 { void m(); };
extern T_func_00a37930 G1_func_00a37930;
void func_00a37930()
{
    G1_func_00a37930.m();
}
