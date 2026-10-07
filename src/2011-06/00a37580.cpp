// roc 2011-06 00a37580  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37580
//
// 00a37580  b9d84bcc00           mov ecx, 0xcc4bd8
// 00a37585  e9b6659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37580 { void m(); };
extern T_func_00a37580 G1_func_00a37580;
void func_00a37580()
{
    G1_func_00a37580.m();
}
