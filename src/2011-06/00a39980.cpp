// roc 2011-06 00a39980  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39980
//
// 00a39980  b978aecc00           mov ecx, 0xccae78
// 00a39985  e9862ba7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39980 { void m(); };
extern T_func_00a39980 G1_func_00a39980;
void func_00a39980()
{
    G1_func_00a39980.m();
}
