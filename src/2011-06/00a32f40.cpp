// roc 2011-06 00a32f40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f40
//
// 00a32f40  b9586bcb00           mov ecx, 0xcb6b58
// 00a32f45  e976a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32f40 { void m(); };
extern T_func_00a32f40 G1_func_00a32f40;
void func_00a32f40()
{
    G1_func_00a32f40.m();
}
