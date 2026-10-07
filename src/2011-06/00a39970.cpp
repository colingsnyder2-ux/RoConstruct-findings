// roc 2011-06 00a39970  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39970
//
// 00a39970  b918b4cc00           mov ecx, 0xccb418
// 00a39975  e9962ba7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39970 { void m(); };
extern T_func_00a39970 G1_func_00a39970;
void func_00a39970()
{
    G1_func_00a39970.m();
}
