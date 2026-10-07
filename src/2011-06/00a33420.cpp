// roc 2011-06 00a33420  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33420
//
// 00a33420  b9f875cb00           mov ecx, 0xcb75f8
// 00a33425  e9c69baaff           jmp 0x4dcff0
// auto-matched from its assembly shape

struct T_func_00a33420 { void m(); };
extern T_func_00a33420 G1_func_00a33420;
void func_00a33420()
{
    G1_func_00a33420.m();
}
