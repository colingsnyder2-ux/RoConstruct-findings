// roc 2011-06 00a32540  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32540
//
// 00a32540  b9085acb00           mov ecx, 0xcb5a08
// 00a32545  e976aba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32540 { void m(); };
extern T_func_00a32540 G1_func_00a32540;
void func_00a32540()
{
    G1_func_00a32540.m();
}
