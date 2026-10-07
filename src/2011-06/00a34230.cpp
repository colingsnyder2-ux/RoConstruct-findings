// roc 2011-06 00a34230  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34230
//
// 00a34230  b9708ccb00           mov ecx, 0xcb8c70
// 00a34235  e90674e3ff           jmp 0x86b640
// auto-matched from its assembly shape

struct T_func_00a34230 { void m(); };
extern T_func_00a34230 G1_func_00a34230;
void func_00a34230()
{
    G1_func_00a34230.m();
}
