// roc 2011-06 00a34c60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34c60
//
// 00a34c60  b938abcb00           mov ecx, 0xcbab38
// 00a34c65  e9d68e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a34c60 { void m(); };
extern T_func_00a34c60 G1_func_00a34c60;
void func_00a34c60()
{
    G1_func_00a34c60.m();
}
