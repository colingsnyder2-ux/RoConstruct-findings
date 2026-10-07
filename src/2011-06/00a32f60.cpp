// roc 2011-06 00a32f60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f60
//
// 00a32f60  b9f86acb00           mov ecx, 0xcb6af8
// 00a32f65  e9a695a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32f60 { void m(); };
extern T_func_00a32f60 G1_func_00a32f60;
void func_00a32f60()
{
    G1_func_00a32f60.m();
}
