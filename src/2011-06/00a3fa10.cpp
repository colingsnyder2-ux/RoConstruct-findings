// roc 2011-06 00a3fa10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fa10
//
// 00a3fa10  b90071d100           mov ecx, 0xd17100
// 00a3fa15  e94636dcff           jmp 0x803060
// auto-matched from its assembly shape

struct T_func_00a3fa10 { void m(); };
extern T_func_00a3fa10 G1_func_00a3fa10;
void func_00a3fa10()
{
    G1_func_00a3fa10.m();
}
