// roc 2011-06 00a37340  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37340
//
// 00a37340  b9386acc00           mov ecx, 0xcc6a38
// 00a37345  e9f6679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37340 { void m(); };
extern T_func_00a37340 G1_func_00a37340;
void func_00a37340()
{
    G1_func_00a37340.m();
}
