// roc 2011-06 00a37bc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37bc0
//
// 00a37bc0  b978f7cb00           mov ecx, 0xcbf778
// 00a37bc5  e9765f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37bc0 { void m(); };
extern T_func_00a37bc0 G1_func_00a37bc0;
void func_00a37bc0()
{
    G1_func_00a37bc0.m();
}
