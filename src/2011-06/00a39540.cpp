// roc 2011-06 00a39540  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39540
//
// 00a39540  b990abcc00           mov ecx, 0xccab90
// 00a39545  e9c62fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39540 { void m(); };
extern T_func_00a39540 G1_func_00a39540;
void func_00a39540()
{
    G1_func_00a39540.m();
}
