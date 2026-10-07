// roc 2011-06 00a37b70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b70
//
// 00a37b70  b9b0fbcb00           mov ecx, 0xcbfbb0
// 00a37b75  e9c65f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b70 { void m(); };
extern T_func_00a37b70 G1_func_00a37b70;
void func_00a37b70()
{
    G1_func_00a37b70.m();
}
