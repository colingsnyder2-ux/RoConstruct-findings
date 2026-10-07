// roc 2011-06 00a32580  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32580
//
// 00a32580  b9705fcb00           mov ecx, 0xcb5f70
// 00a32585  e9869fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32580 { void m(); };
extern T_func_00a32580 G1_func_00a32580;
void func_00a32580()
{
    G1_func_00a32580.m();
}
