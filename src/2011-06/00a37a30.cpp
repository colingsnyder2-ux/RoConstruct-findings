// roc 2011-06 00a37a30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37a30
//
// 00a37a30  b9900ccc00           mov ecx, 0xcc0c90
// 00a37a35  e906619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37a30 { void m(); };
extern T_func_00a37a30 G1_func_00a37a30;
void func_00a37a30()
{
    G1_func_00a37a30.m();
}
