// roc 2011-06 00a34080  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34080
//
// 00a34080  b9b885cb00           mov ecx, 0xcb85b8
// 00a34085  e9669dbeff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a34080 { void m(); };
extern T_func_00a34080 G1_func_00a34080;
void func_00a34080()
{
    G1_func_00a34080.m();
}
