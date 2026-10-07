// roc 2011-06 00a32640  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32640
//
// 00a32640  b9d05bcb00           mov ecx, 0xcb5bd0
// 00a32645  e9c69ea7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32640 { void m(); };
extern T_func_00a32640 G1_func_00a32640;
void func_00a32640()
{
    G1_func_00a32640.m();
}
