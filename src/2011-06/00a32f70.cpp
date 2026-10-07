// roc 2011-06 00a32f70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f70
//
// 00a32f70  b9606dcb00           mov ecx, 0xcb6d60
// 00a32f75  e99695a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32f70 { void m(); };
extern T_func_00a32f70 G1_func_00a32f70;
void func_00a32f70()
{
    G1_func_00a32f70.m();
}
