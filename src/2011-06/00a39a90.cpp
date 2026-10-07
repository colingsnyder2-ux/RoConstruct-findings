// roc 2011-06 00a39a90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a90
//
// 00a39a90  b960bacc00           mov ecx, 0xccba60
// 00a39a95  e92636a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39a90 { void m(); };
extern T_func_00a39a90 G1_func_00a39a90;
void func_00a39a90()
{
    G1_func_00a39a90.m();
}
