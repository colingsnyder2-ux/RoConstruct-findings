// roc 2011-06 00a325b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a325b0
//
// 00a325b0  b9405ecb00           mov ecx, 0xcb5e40
// 00a325b5  e906aba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a325b0 { void m(); };
extern T_func_00a325b0 G1_func_00a325b0;
void func_00a325b0()
{
    G1_func_00a325b0.m();
}
