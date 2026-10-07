// roc 2011-06 00a37940  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37940
//
// 00a37940  b93819cc00           mov ecx, 0xcc1938
// 00a37945  e9f6619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37940 { void m(); };
extern T_func_00a37940 G1_func_00a37940;
void func_00a37940()
{
    G1_func_00a37940.m();
}
