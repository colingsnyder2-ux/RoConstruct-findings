// roc 2011-06 00a3d660  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d660
//
// 00a3d660  b9e822cd00           mov ecx, 0xcd22e8
// 00a3d665  e98607beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3d660 { void m(); };
extern T_func_00a3d660 G1_func_00a3d660;
void func_00a3d660()
{
    G1_func_00a3d660.m();
}
