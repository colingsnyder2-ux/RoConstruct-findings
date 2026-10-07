// roc 2011-06 00a37510  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37510
//
// 00a37510  b9c051cc00           mov ecx, 0xcc51c0
// 00a37515  e926669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37510 { void m(); };
extern T_func_00a37510 G1_func_00a37510;
void func_00a37510()
{
    G1_func_00a37510.m();
}
