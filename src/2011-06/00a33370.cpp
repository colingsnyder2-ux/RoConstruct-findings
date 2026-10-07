// roc 2011-06 00a33370  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33370
//
// 00a33370  b97073cb00           mov ecx, 0xcb7370
// 00a33375  e9c6a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a33370 { void m(); };
extern T_func_00a33370 G1_func_00a33370;
void func_00a33370()
{
    G1_func_00a33370.m();
}
