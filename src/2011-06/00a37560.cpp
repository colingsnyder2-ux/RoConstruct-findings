// roc 2011-06 00a37560  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37560
//
// 00a37560  b9884dcc00           mov ecx, 0xcc4d88
// 00a37565  e9d6659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37560 { void m(); };
extern T_func_00a37560 G1_func_00a37560;
void func_00a37560()
{
    G1_func_00a37560.m();
}
