// roc 2011-06 00a37450  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37450
//
// 00a37450  b9e05bcc00           mov ecx, 0xcc5be0
// 00a37455  e9e6669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37450 { void m(); };
extern T_func_00a37450 G1_func_00a37450;
void func_00a37450()
{
    G1_func_00a37450.m();
}
