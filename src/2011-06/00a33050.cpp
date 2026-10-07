// roc 2011-06 00a33050  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33050
//
// 00a33050  b9e86dcb00           mov ecx, 0xcb6de8
// 00a33055  e966a0a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a33050 { void m(); };
extern T_func_00a33050 G1_func_00a33050;
void func_00a33050()
{
    G1_func_00a33050.m();
}
