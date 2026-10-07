// roc 2011-06 00a34c30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34c30
//
// 00a34c30  b9b8accb00           mov ecx, 0xcbacb8
// 00a34c35  e9068f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a34c30 { void m(); };
extern T_func_00a34c30 G1_func_00a34c30;
void func_00a34c30()
{
    G1_func_00a34c30.m();
}
