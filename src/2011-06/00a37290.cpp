// roc 2011-06 00a37290  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37290
//
// 00a37290  b98073cc00           mov ecx, 0xcc7380
// 00a37295  e9a6689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37290 { void m(); };
extern T_func_00a37290 G1_func_00a37290;
void func_00a37290()
{
    G1_func_00a37290.m();
}
