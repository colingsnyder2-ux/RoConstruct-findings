// roc 2011-06 00a32ee0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32ee0
//
// 00a32ee0  b95065cb00           mov ecx, 0xcb6550
// 00a32ee5  e956ac9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a32ee0 { void m(); };
extern T_func_00a32ee0 G1_func_00a32ee0;
void func_00a32ee0()
{
    G1_func_00a32ee0.m();
}
