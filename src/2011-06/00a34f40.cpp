// roc 2011-06 00a34f40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f40
//
// 00a34f40  b928bdcb00           mov ecx, 0xcbbd28
// 00a34f45  e9c675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34f40 { void m(); };
extern T_func_00a34f40 G1_func_00a34f40;
void func_00a34f40()
{
    G1_func_00a34f40.m();
}
