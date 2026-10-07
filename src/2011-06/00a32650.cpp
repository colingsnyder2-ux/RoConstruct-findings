// roc 2011-06 00a32650  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32650
//
// 00a32650  b9085dcb00           mov ecx, 0xcb5d08
// 00a32655  e966aaa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32650 { void m(); };
extern T_func_00a32650 G1_func_00a32650;
void func_00a32650()
{
    G1_func_00a32650.m();
}
