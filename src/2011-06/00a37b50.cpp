// roc 2011-06 00a37b50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b50
//
// 00a37b50  b960fdcb00           mov ecx, 0xcbfd60
// 00a37b55  e9e65f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b50 { void m(); };
extern T_func_00a37b50 G1_func_00a37b50;
void func_00a37b50()
{
    G1_func_00a37b50.m();
}
