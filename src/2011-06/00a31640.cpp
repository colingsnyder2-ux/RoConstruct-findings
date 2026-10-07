// roc 2011-06 00a31640  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31640
//
// 00a31640  b9702ccb00           mov ecx, 0xcb2c70
// 00a31645  e9e611a2ff           jmp 0x452830
// auto-matched from its assembly shape

struct T_func_00a31640 { void m(); };
extern T_func_00a31640 G1_func_00a31640;
void func_00a31640()
{
    G1_func_00a31640.m();
}
