// roc 2011-06 00a35720  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35720
//
// 00a35720  b9f0decb00           mov ecx, 0xcbdef0
// 00a35725  e99679a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a35720 { void m(); };
extern T_func_00a35720 G1_func_00a35720;
void func_00a35720()
{
    G1_func_00a35720.m();
}
