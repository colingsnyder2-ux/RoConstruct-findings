// roc 2011-06 00a37980  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37980
//
// 00a37980  b9d815cc00           mov ecx, 0xcc15d8
// 00a37985  e9b6619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37980 { void m(); };
extern T_func_00a37980 G1_func_00a37980;
void func_00a37980()
{
    G1_func_00a37980.m();
}
