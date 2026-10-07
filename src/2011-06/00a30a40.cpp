// roc 2011-06 00a30a40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30a40
//
// 00a30a40  b9fc24cb00           mov ecx, 0xcb24fc
// 00a30a45  e966129fff           jmp 0x421cb0
// auto-matched from its assembly shape

struct T_func_00a30a40 { void m(); };
extern T_func_00a30a40 G1_func_00a30a40;
void func_00a30a40()
{
    G1_func_00a30a40.m();
}
