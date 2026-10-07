// roc 2011-06 00a31880  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31880
//
// 00a31880  b92038cb00           mov ecx, 0xcb3820
// 00a31885  e976dba2ff           jmp 0x45f400
// auto-matched from its assembly shape

struct T_func_00a31880 { void m(); };
extern T_func_00a31880 G1_func_00a31880;
void func_00a31880()
{
    G1_func_00a31880.m();
}
