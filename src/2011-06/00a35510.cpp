// roc 2011-06 00a35510  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35510
//
// 00a35510  b9d8d6cb00           mov ecx, 0xcbd6d8
// 00a35515  e9a67ba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a35510 { void m(); };
extern T_func_00a35510 G1_func_00a35510;
void func_00a35510()
{
    G1_func_00a35510.m();
}
