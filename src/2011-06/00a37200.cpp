// roc 2011-06 00a37200  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37200
//
// 00a37200  b9187bcc00           mov ecx, 0xcc7b18
// 00a37205  e936699dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37200 { void m(); };
extern T_func_00a37200 G1_func_00a37200;
void func_00a37200()
{
    G1_func_00a37200.m();
}
