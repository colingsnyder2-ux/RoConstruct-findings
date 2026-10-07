// roc 2011-06 00a37640  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37640
//
// 00a37640  b9b841cc00           mov ecx, 0xcc41b8
// 00a37645  e9f6649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37640 { void m(); };
extern T_func_00a37640 G1_func_00a37640;
void func_00a37640()
{
    G1_func_00a37640.m();
}
