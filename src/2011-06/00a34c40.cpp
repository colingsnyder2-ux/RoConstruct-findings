// roc 2011-06 00a34c40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34c40
//
// 00a34c40  b980a9cb00           mov ecx, 0xcba980
// 00a34c45  e9f68e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a34c40 { void m(); };
extern T_func_00a34c40 G1_func_00a34c40;
void func_00a34c40()
{
    G1_func_00a34c40.m();
}
