// roc 2011-06 00a3af50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3af50
//
// 00a3af50  b9b0decc00           mov ecx, 0xccdeb0
// 00a3af55  e9962ebeff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3af50 { void m(); };
extern T_func_00a3af50 G1_func_00a3af50;
void func_00a3af50()
{
    G1_func_00a3af50.m();
}
