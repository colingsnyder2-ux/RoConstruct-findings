// roc 2011-06 00a32d40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32d40
//
// 00a32d40  b95460cb00           mov ecx, 0xcb6054
// 00a32d45  e9c697a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32d40 { void m(); };
extern T_func_00a32d40 G1_func_00a32d40;
void func_00a32d40()
{
    G1_func_00a32d40.m();
}
