// roc 2011-06 00a32500  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32500
//
// 00a32500  b9d85ecb00           mov ecx, 0xcb5ed8
// 00a32505  e9b6aba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32500 { void m(); };
extern T_func_00a32500 G1_func_00a32500;
void func_00a32500()
{
    G1_func_00a32500.m();
}
