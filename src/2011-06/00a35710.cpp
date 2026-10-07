// roc 2011-06 00a35710  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35710
//
// 00a35710  b9e8ddcb00           mov ecx, 0xcbdde8
// 00a35715  e926849dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a35710 { void m(); };
extern T_func_00a35710 G1_func_00a35710;
void func_00a35710()
{
    G1_func_00a35710.m();
}
