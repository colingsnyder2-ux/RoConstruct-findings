// roc 2011-06 00a37fd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37fd0
//
// 00a37fd0  b91884cc00           mov ecx, 0xcc8418
// 00a37fd5  e946a9b8ff           jmp 0x5c2920
// auto-matched from its assembly shape

struct T_func_00a37fd0 { void m(); };
extern T_func_00a37fd0 G1_func_00a37fd0;
void func_00a37fd0()
{
    G1_func_00a37fd0.m();
}
