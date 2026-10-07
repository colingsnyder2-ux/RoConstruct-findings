// roc 2011-06 00a37600  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37600
//
// 00a37600  b91845cc00           mov ecx, 0xcc4518
// 00a37605  e936659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37600 { void m(); };
extern T_func_00a37600 G1_func_00a37600;
void func_00a37600()
{
    G1_func_00a37600.m();
}
